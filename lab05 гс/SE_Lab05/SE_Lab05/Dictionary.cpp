#include "Dictionary.h"
using namespace std;

namespace Dictionary
{
	Instance Create(const char name[DICTNAMEMAXSIZE], int size)
	{
		if (strlen(name) > DICTNAMEMAXSIZE) { //проверка длины//
			throw THROW01;
		}

		if (size > DICTMAXSIZE) {
			throw THROW02;
		}

		Instance* newDictionary = new Instance; //объект типа instance//
		newDictionary->dictionary = new Entry[size];
		strcpy_s(newDictionary->name, name); //copy//
		newDictionary->maxsize = size; 
		newDictionary->size = 0;return *newDictionary;
	};

	void AddEntry(Instance& inst, Entry ed)
	{
		if (inst.size == inst.maxsize) {
			throw THROW03;
		}

		for (int i = 0; i < inst.size; i++) {
			if (inst.dictionary[i].id == ed.id)
				throw THROW04;
		}

		inst.dictionary[inst.size] = ed;
		inst.size += 1;
	}

	void DelEntry(Instance& inst, int id)
	{
		int a = inst.size;
		if (id > a) {
			throw THROW06;
		}

		for (int i = 0; i < inst.size; i++) {
			if (inst.dictionary[i].id == id) {
				for (int j = i; j < inst.maxsize - 1; j++) {
					inst.dictionary[i] = inst.dictionary[j + 1];
				}
				inst.size--;
				return;
			}
		}
	}

	void UpdEntry(Instance& inst, int id, Entry new_ed)
	{
		int a = inst.size;

		for (int i = 0; i < inst.size; i++) {

			if (inst.dictionary[i].id == id) {

					throw THROW08;

				inst.dictionary[i].id = new_ed.id;
				strcpy_s(inst.dictionary[i].name, new_ed.name);
			}

			 if (id > a + 1) {
				throw THROW07;
			}
		}
	}

	Entry GetEntry(Instance& inst, int id) {

		Entry getDictionary;
		int a = inst.size;
		if (id > a) {
			throw THROW06;
		}
		for (int i = 0; i < inst.size; i++) {

			if (inst.dictionary[i].id == id) {

				cout << "-------------------------" << endl << inst.dictionary[i].id << " " << inst.dictionary[i].name << endl;
				return inst.dictionary[i];
			}
		}
		throw THROW05;
	}

	void Print(Instance d)
	{
		cout << "-------------------" << d.name << "----------------------" << endl;
		for (int i = 0; i < d.size; i++)
		{
			cout << d.dictionary[i].id << " " << d.dictionary[i].name << endl;
		}
	}

	void Delete(Instance& d)
	{
		delete[] d.dictionary;
	}
};
