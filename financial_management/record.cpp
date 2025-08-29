#pragma once
#include "record.h"

record::record()
{
	dt=date();
	money=999;
	who= "xng";
}

record::record(date dt,int m,string sb):dt(dt),money(m),who(sb){
}

record::~record(){
}

date record::getdate(){
	return dt;
}
void record::setdate(date dt1){
	dt=dt1;
}

int record::getmoney() {
	return money;
}

void record::setmoney(int m) {
	money=m;
}

string record::getwho() {
	return who;
}

void record::setwho(string sb) {
	who = sb;
}

