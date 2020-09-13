#include "MainFrame.h"
#include "database.h"
#include "IO.h"
#include <cliext\vector>



using namespace System;
using namespace System::Windows::Forms;

TABLE* table;

[STAThreadAttribute]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	DataBaseForms::MainFrame form;
	Application::Run(% form);

	return 0;
}

// converting System::string^ to std::string
string& convert_String_To_string(System::String^ s, string& os)
{
    using namespace Runtime::InteropServices;
    const char* chars =
        (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
    os = chars;
    Marshal::FreeHGlobal(IntPtr((void*)chars));
    return os;
}

//converting std::string to System::string^
System::String^ convert_string_To_String(string& os, System::String^ s)
{
    s = gcnew System::String(os.c_str());
    return s;
}

System::Void DataBaseForms::MainFrame::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    openFileDialog1->ShowDialog();
    //FileDialog::
    //CFileDialog fDlg(false);//false - сохранить, true - открыть
    //fDlg.m_ofn.lpstrTitle      = "SaveAs";
    //fDlg.m_ofn.lpstrFilter     = "All files - (*.*)\0*.*\0\0";
    //fDlg.m_ofn.lpstrDefExt     = "txt";
    //if(fDlg.DoModal()==IDOK)
    //{
    //if (!(f = fopen(fDlg.m_ofn.lpstrFile, "wb")))
    //    AfxMessageBox("Не могу создать " + CString(fDlg.m_ofn.lpstrFile));
    //else
    //{
    //    fprintf(f, "%.2f\r\n", m_edit3);//.2 - число знаков после запятой
    //    fprintf(f, "%.2f\r\n", m_edit4);//\r\n - можно заменить на запятую, пробел и т.д.
    //    fclose(f);
    //    AfxMessageBox("Данные записаны в " + CString(fDlg.m_ofn.lpstrFile));
    //}
    //}
}

System::Void DataBaseForms::MainFrame::openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e)
{
    string filename;
    convert_String_To_string(openFileDialog1->FileName, filename);
    table = new TABLE(filename);
    ShowTable();
}

System::Void DataBaseForms::MainFrame::saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e)
{
    string filename;
    convert_String_To_string(saveFileDialog1->FileName, filename);
    if (table)
        table->PrintIntoFile(filename);
    else
        MessageBox::Show("No data to save!");
}

System::Void DataBaseForms::MainFrame::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
    if(table)
        ShowTable();
    else
        MessageBox::Show("NO DATA!");
}

void DataBaseForms::MainFrame::ShowTable()
{
    DataTable->Items->Clear();
    for (int i = 0; i < table->GetSize(); ++i)
    {
        ELEMENT element = (*table)[i];
        string a = to_string(element.GetId());
        String^ b;
        ListViewItem^ item = DataTable->Items->Add(convert_string_To_String(a, b));
        a = element.GetName();
        item->SubItems->Add(convert_string_To_String(a, b));

        a = element.GetPhone();
        item->SubItems->Add(convert_string_To_String(a, b));

        a = element.GetEmail();
        item->SubItems->Add(convert_string_To_String(a, b));

        a = to_string(element.GetSalary());
        item->SubItems->Add(convert_string_To_String(a, b));

        a = element.GetManagerName();
        item->SubItems->Add(convert_string_To_String(a, b));

        a = element.GetManagerPhone();
        item->SubItems->Add(convert_string_To_String(a, b));

        a = element.GetDate();
        item->SubItems->Add(convert_string_To_String(a, b));

    }
}

void DataBaseForms::MainFrame::SetDefSettingsTextBoxes()
{
    cliext::vector<TextBox^> textBoxes;
    textBoxes.push_back(textBoxName);
    textBoxes.push_back(textBoxPhone);
    textBoxes.push_back(textBoxEmail);
    textBoxes.push_back(textBoxSalary);
    textBoxes.push_back(textBoxManager);
    textBoxes.push_back(textBoxMPhone);
    textBoxes.push_back(textBoxDate);

    for (int i = 0; i < textBoxes.size(); ++i)
    {
        textBoxes[i]->BackColor = BackColor.White;
        textBoxes[i]->Clear();
    }

}

void DataBaseForms::MainFrame::AddRowReqTable(ELEMENT element)
{
    string a = to_string(element.GetId());
    String^ b;
    ListViewItem^ item = RequestRes->Items->Add(convert_string_To_String(a, b));

    a = element.GetName();
    item->SubItems->Add(convert_string_To_String(a, b));

    a = element.GetPhone();
    item->SubItems->Add(convert_string_To_String(a, b));

    a = element.GetEmail();
    item->SubItems->Add(convert_string_To_String(a, b));

    a = to_string(element.GetSalary());
    item->SubItems->Add(convert_string_To_String(a, b));

    a = element.GetManagerName();
    item->SubItems->Add(convert_string_To_String(a, b));

    a = element.GetManagerPhone();
    item->SubItems->Add(convert_string_To_String(a, b));

    a = element.GetDate();
    item->SubItems->Add(convert_string_To_String(a, b));
}

void DataBaseForms::MainFrame::ClearReqTable()
{
    RequestRes->Items->Clear();
}



System::Void DataBaseForms::MainFrame::button2_Click(System::Object^ sender, System::EventArgs^ e)
{

    cliext::vector<TextBox^> textBoxes;
    textBoxes.push_back(textBoxName);
    textBoxes.push_back(textBoxPhone);
    textBoxes.push_back(textBoxEmail);
    textBoxes.push_back(textBoxSalary);
    textBoxes.push_back(textBoxManager);
    textBoxes.push_back(textBoxMPhone);
    textBoxes.push_back(textBoxDate);

    for(int i = 0; i < textBoxes.size() ; ++i)
        if (textBoxes[i]->Text == "")
        {
            MessageBox::Show("Some data haven't been entered");
            return;
        }
    string data2;
    vector<string> data;
    for (int i = 0; i < textBoxes.size(); ++i)
    {
        textBoxes[i]->BackColor = BackColor.White;
        string tmp;
        tmp = convert_String_To_string(textBoxes[i]->Text, tmp);
        data.push_back(tmp);
        data2 += tmp;
        data2 += ' ';
    }
    data2[data2.length() - 1] = '\0';

    bool isOk = true;

    for (int i = 0; i < data.size(); ++i)
    {
        if (!isCorrect(data[i], i))
        {
            isOk = false;
            textBoxes[i]->BackColor = BackColor.Red;
        }
    }

    if (!isOk)
    {
        MessageBox::Show("Some data is wrong!");
        return;
    }

    ELEMENT* stud;

    if (table)
    {
        stud = new ELEMENT(data2, table->GetSize());
        table->AddElement(stud);
    }
    else {
        stud = new ELEMENT(data2, 0);
        vector<ELEMENT*> studs;
        studs.push_back(stud);
        table = new TABLE(studs);
    }

    SetDefSettingsTextBoxes();
    AddRowReqTable(*stud);
    ShowTable();
}

System::Void DataBaseForms::MainFrame::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    cliext::vector<TextBox^> textBoxes;
    textBoxes.push_back(textBoxName);
    textBoxes.push_back(textBoxPhone);
    textBoxes.push_back(textBoxEmail);
    textBoxes.push_back(textBoxSalary);
    textBoxes.push_back(textBoxManager);
    textBoxes.push_back(textBoxMPhone);
    textBoxes.push_back(textBoxDate);

    vector<string> values;
    values.push_back("0");
    for (int i = 0; i < textBoxes.size(); ++i)
    {
        textBoxes[i]->BackColor = BackColor.White;
        if (textBoxes[i]->Text != "")
        {
            string tmp;
            values.push_back(convert_String_To_string(textBoxes[i]->Text, tmp));
        }
        else
            values.push_back("0");
    }

    bool isOk = true;

    for (int i = 1; i < values.size(); ++i)
    {
        if (values[i] != "0")
        {
            if (!isCorrect(values[i], i - 1))
            {
                isOk = false;
                textBoxes[i]->BackColor = BackColor.Red;
            }
        }
    }

    if (!isOk)
    {
        MessageBox::Show("Some data is wrong!");
        return;
    }

    vector<ELEMENT*> res = table->SearchElements(values);

    if (res.size() > 0)
    {
        ClearReqTable();
        for (int i = 0; i < res.size(); ++i)
            AddRowReqTable(*(res[i]));
    }
    else
        MessageBox::Show("No data found");

}

System::Void DataBaseForms::MainFrame::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    cliext::vector<TextBox^> textBoxes;
    textBoxes.push_back(textBoxName);
    textBoxes.push_back(textBoxPhone);
    textBoxes.push_back(textBoxEmail);
    textBoxes.push_back(textBoxSalary);
    textBoxes.push_back(textBoxManager);
    textBoxes.push_back(textBoxMPhone);
    textBoxes.push_back(textBoxDate);

    vector<string> values;
    values.push_back("0");
    for (int i = 0; i < textBoxes.size(); ++i)
    {
        textBoxes[i]->BackColor = BackColor.White;
        if (textBoxes[i]->Text != "")
        {
            string tmp;
            values.push_back(convert_String_To_string(textBoxes[i]->Text, tmp));
        }
        else
            values.push_back("0");
    }

    bool isOk = true;

    for (int i = 1; i < values.size(); ++i)
    {
        if (values[i] != "0")
        {
            if (!isCorrect(values[i], i - 1))
            {
                isOk = false;
                textBoxes[i]->BackColor = BackColor.Red;
            }
        }
    }

    if (!isOk)
    {
        MessageBox::Show("Some data is wrong!");
        return;
    }

    vector<ELEMENT*> res = table->SearchElements(values);

    if (res.size() > 0)
    {
        ClearReqTable();
        for (int i = 0; i < res.size(); ++i)
            AddRowReqTable(*(res[i]));

        table->DeleteElements(values);
        ShowTable();
    }
    else
        MessageBox::Show("No data found!");
}

System::Void DataBaseForms::MainFrame::ColumnClick(System::Object^ sender, ColumnClickEventArgs^ e)
{
    table->Sort(e->Column);
    ShowTable();
}

System::Void DataBaseForms::MainFrame::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
    saveFileDialog1->ShowDialog();
}
