#include"date.h"
#include<iostream>
#include <fstream>
#include<iomanip>
#pragma once
const string filename = "1.txt";
using namespace std;

class record{
	protected:
		date dt;
		int money;
		string who;
	public:
		record();
		record(date dt,int m,string sb);
		~record();
		date getdate();
		void setdate(date dt1);
		int getmoney();
		void setmoney(int m);
		string getwho();
		void setwho(string sb);

		virtual  void showrecord()=0;
		virtual void save(ofstream& out)= 0;
		virtual bool isIncome() const = 0;
		virtual bool isSpend() const = 0;
};

