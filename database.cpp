#include "database.h"
#include "IO.h"
#include <algorithm>
#include <fstream>
//#include <iostream>
//using namespace std;

enum KEYS {
	name,
	phone,
	email,
	salary,
	managerName,
	managerPhone,
	date
};

ELEMENT::ELEMENT(string Data , int ID)
{
	vector<string>* parsed = ParseString(Data);
	this->name = (*parsed)[KEYS::name];
	this->phone = (*parsed)[KEYS::phone];
	this->email = (*parsed)[KEYS::email];
	this->salary = StringToInt((*parsed)[KEYS::salary]);
	this->managerName = (*parsed)[KEYS::managerName];
	this->managerPhone = (*parsed)[KEYS::managerPhone];
	this->date = (*parsed)[KEYS::date];
	this->id = ID;
}


unsigned int ELEMENT::GetId()
{
	return id;
}

string ELEMENT::GetName()
{
	return name;
}

string ELEMENT::GetPhone()
{
	return phone;
}

string ELEMENT::GetEmail()
{
	return email;
}

int ELEMENT::GetSalary()
{
	return salary;
}

string ELEMENT::GetManagerName()
{
	return managerName;
}

string ELEMENT::GetManagerPhone()
{
	return managerPhone;
}

string ELEMENT::GetDate()
{
	return date;
}



void ELEMENT::ChangePhone(string newPhone)
{
	this->phone = newPhone;
}

void ELEMENT::ChangeEmail(string newEmail)
{
	this->email = newEmail;
}

void ELEMENT::ChangeSalary(int newSalary)
{
	this->salary = newSalary;
}

void ELEMENT::ChangeManager(string newManager)
{
	this->managerName = newManager;
}

void ELEMENT::ChangeManagerPhone(string newManagerPhone)
{
	this->managerPhone = newManagerPhone;
}



void ELEMENT::PrintConsole()
{
	cout << name << " " << phone << " " << email << " " << salary << " " << managerName << " " << managerPhone << " " << date << " " << endl;
}

void ELEMENT::PrintFile(ofstream* out)
{
	*out << name << " " << phone << " " << email << " " << salary << " " << managerName << " " << managerPhone << " " << date << " " << endl;
}


bool ELEMENT::operator==(ELEMENT second)
{
	if (name != second.name || email != second.email || phone != second.phone || salary != second.salary || managerName != second.managerName || managerPhone != second.managerPhone || date != second.date)
		return false;
	return true;
}

TABLE::TABLE(vector<ELEMENT*> _elements)
{
	for (int i = 0; i < _elements.size(); ++i)
		elements.push_back(_elements[i]);
	size = elements.size();
	maxsize = elements.max_size();
}

TABLE::TABLE(string filename)
{
	vector<string>* Data = ParseFile(filename);
	for (int i = 0; i < Data->size(); ++i)
	{
		ELEMENT* test = new ELEMENT((*Data)[i] , i);
		elements.push_back(test);
	}
	size = elements.size();
	maxsize = elements.max_size();
}

ELEMENT* TABLE::FindElementByName(string name)
{
	for (int i = 0; i < elements.size(); ++i)
		if ( (elements[i])->GetName() == name)
			return elements[i];
}

ELEMENT* TABLE::FindElementById(unsigned int ID)
{
	for (int i = 0; i < elements.size(); ++i)
		if ((elements[i])->GetId() == ID)
			return elements[i];
}

ELEMENT* TABLE::FindElementByPhone(string phone)
{
	for (int i = 0; i < elements.size(); ++i)
		if ((elements[i])->GetPhone() == phone)
			return elements[i];
}

void TABLE::ChangePhoneById(unsigned int id, string newPhone)
{
	ELEMENT* tmp = FindElementById(id);
	tmp->ChangePhone(newPhone);
}

void TABLE::ChangeEmailById(unsigned int id, string newEmail)
{
	ELEMENT* tmp = FindElementById(id);
	tmp->ChangeEmail(newEmail);
}

void TABLE::ChangeSalaryById(unsigned int id, int newSalary)
{
	ELEMENT* tmp = FindElementById(id);
	tmp->ChangeSalary(newSalary);
}

void TABLE::ChangeManagerById(unsigned int id, string newManager)
{
	ELEMENT* tmp = FindElementById(id);
	tmp->ChangeManager(newManager);
}

void TABLE::ChangeManagerPhoneById(unsigned int id, string newManagerPhone)
{
	ELEMENT* tmp = FindElementById(id);
	tmp->ChangeManagerPhone(newManagerPhone);
}

void TABLE::AddElement(ELEMENT* element)
{
	elements.push_back(element);
	size++;
}

void TABLE::DeleteElementByName(string name)
{
	int i = 0;
	for (i = 0; i < elements.size(); ++i)
		if ((elements[i])->GetName() == name)
			break;
	elements.erase(elements.begin() + i);
}

void TABLE::DeleteElementByPhone(string phone)
{
	int i = 0;
	for (i = 0; i < elements.size(); ++i)
		if ((elements[i])->GetPhone() == phone)
			break;
	elements.erase(elements.begin() + i);
}

void TABLE::DeleteElementById(unsigned int ID)
{
	int i = 0;
	for (i = 0; i < elements.size(); ++i)
		if ((elements[i])->GetId() == ID)
		{
			elements.erase(elements.begin() + i);
			break;
		}
}

void TABLE::DeleteAllCopies(ELEMENT element)
{
	for (int i = 0; i < elements.size(); ++i)
	{
		if ( *(elements[i]) == element)
		{
			elements.erase(elements.begin() + i);
			--i;
		}
	}
}

void TABLE::ChangeElement(unsigned int id, ELEMENT* newElement)
{
	ELEMENT* tmp = FindElementById(id);
	tmp = newElement;
}

void TABLE::Sort(int byType)
{
	switch (byType)
	{
	case 1:
		sort(elements.begin(), elements.end(), SortByName);
		break;
	case 2:
		sort(elements.begin(), elements.end(), SortByEmail);
		break;
	case 4:
		sort(elements.begin(), elements.end(), SortByMName);
		break;
	default:
		sort(elements.begin(), elements.end(), SortById);
		break;
	}
}

void TABLE::PrintIntoFile(string filename)
{
	ofstream out(filename);                      // ofstream
	for (int i = 0; i < elements.size(); ++i)
	{
		ELEMENT* element = elements[i];
		element->PrintFile(&out);
	}	
	out.close();
}

void TABLE::PrintIntoConsole()
{
	for (int i = 0; i < elements.size(); ++i)
	{
		ELEMENT* element = elements[i];
		element->PrintConsole();
	}
}

int TABLE::GetSize()
{
	return size;
}

vector<ELEMENT*>& TABLE::SearchElements(vector<string> values)
{
	vector<ELEMENT*>* result = new vector<ELEMENT*>;
	for (int i = 0; i < size; ++i)
	{
		
		if (values[0] != "0")
			if (this->elements[i]->GetId() != StringToInt(values[0]))
				continue;
		if (values[1] != "0")
			if (this->elements[i]->GetName() != values[1])
				continue;
		if (values[2] != "0")
			if (this->elements[i]->GetPhone() != values[2])
				continue;
		if (values[3] != "0")
			if (this->elements[i]->GetEmail() != values[3])
				continue;
		if (values[4] != "0")
			if (this->elements[i]->GetSalary() != StringToInt(values[4]))
				continue;
		if (values[5] != "0")
			if (this->elements[i]->GetManagerName() != values[5])
				continue;
		if (values[6] != "0")
			if (this->elements[i]->GetManagerPhone() != values[6])
				continue;
		if (values[7] != "0")
			if (this->elements[i]->GetDate() != values[7])
				continue;
		result->push_back(this->elements[i]);
	}
	return *result;
}

void TABLE::DeleteElements(vector<string> values)
{
	for (int i = 0; i < size; ++i)
	{

		if (values[0] != "0")
			if (this->elements[i]->GetId() != StringToInt(values[0]))
				continue;
		if (values[1] != "0")
			if (this->elements[i]->GetName() != values[1])
				continue;
		if (values[2] != "0")
			if (this->elements[i]->GetPhone() != values[2])
				continue;
		if (values[3] != "0")
			if (this->elements[i]->GetEmail() != values[3])
				continue;
		if (values[4] != "0")
			if (this->elements[i]->GetSalary() != StringToInt(values[4]))
				continue;
		if (values[5] != "0")
			if (this->elements[i]->GetManagerName() != values[5])
				continue;
		if (values[6] != "0")
			if (this->elements[i]->GetManagerPhone() != values[6])
				continue;
		if (values[7] != "0")
			if (this->elements[i]->GetDate() != values[7])
				continue;
		this->elements.erase(this->elements.begin() + i);
		size--;
		i--;
	}
}

ELEMENT& TABLE::operator[](int index)
{
	return *this->elements[index];
}


bool SortByName(ELEMENT* a, ELEMENT* b)
{
	return a->GetName() < b->GetName();
}

bool SortById(ELEMENT* a, ELEMENT* b)
{
	return a->GetId() < b->GetId();
}

bool SortByEmail(ELEMENT* a, ELEMENT* b)
{
	return a->GetEmail() < b->GetEmail();
}

bool SortByMName(ELEMENT* a, ELEMENT* b)
{
	return a->GetManagerName() < b->GetManagerName();
}


TABLE* InitTable(string filename)
{
	return new TABLE(filename);
}
