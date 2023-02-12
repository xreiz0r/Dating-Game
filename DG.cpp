#include<iostream>
#include<map>
#include<string>
#include<iterator>
#include<cmath>

using namespace std;



int main ()
{
string name;
double sum=0.0;
double mean  = 0.0;
int count = 0;
cout << "Enter one name: ";

if (getline(cin, name)){}
//cin>>name;




//use single quotes instead of double quotes for char search.
map<char,int> example;
//lower-case
	example.insert(std::make_pair('a',1));
	example.insert(std::make_pair('b',2));
	example.insert(std::make_pair('c',3));
	example.insert(std::make_pair('d',4));
	example.insert(std::make_pair('e',5));
	example.insert(std::make_pair('f',6));
	example.insert(std::make_pair('g',7));
	example.insert(std::make_pair('h',8));
	example.insert(std::make_pair('i',9));
	example.insert(std::make_pair('j',10));
	
	example.insert(std::make_pair('k',11));
	example.insert(std::make_pair('l',12));
	example.insert(std::make_pair('m',13));
	example.insert(std::make_pair('n',14));
	example.insert(std::make_pair('o',15));
	example.insert(std::make_pair('p',16));
	example.insert(std::make_pair('q',17));
	example.insert(std::make_pair('r',18));
	example.insert(std::make_pair('s',19));
	example.insert(std::make_pair('t',20));
	
	example.insert(std::make_pair('u',21));
	example.insert(std::make_pair('v',22));
	example.insert(std::make_pair('w',23));
	example.insert(std::make_pair('x',24));
	example.insert(std::make_pair('y',25));
	example.insert(std::make_pair('z',26));
//upper-case
	example.insert(std::make_pair('A',1));
	example.insert(std::make_pair('B',2));
	example.insert(std::make_pair('C',3));
	example.insert(std::make_pair('D',4));
	example.insert(std::make_pair('E',5));
	example.insert(std::make_pair('F',6));
	example.insert(std::make_pair('G',7));
	example.insert(std::make_pair('H',8));
	example.insert(std::make_pair('I',9));
	example.insert(std::make_pair('J',10));
	
	example.insert(std::make_pair('K',11));
	example.insert(std::make_pair('L',12));
	example.insert(std::make_pair('M',13));
	example.insert(std::make_pair('N',14));
	example.insert(std::make_pair('O',15));
	example.insert(std::make_pair('P',16));
	example.insert(std::make_pair('Q',17));
	example.insert(std::make_pair('R',18));
	example.insert(std::make_pair('S',19));
	controlc.com/3a0608e5

	example.insert(std::make_pair('T',20));
	
	example.insert(std::make_pair('U',21));
	example.insert(std::make_pair('V',22));
	example.insert(std::make_pair('W',23));
	example.insert(std::make_pair('X',24));
	example.insert(std::make_pair('Y',25));
	example.insert(std::make_pair('Z',26));
	example.insert(std::make_pair(' ',0));

int bb = name.size();

//find entry conversion	 
auto seal = example.find(name[0]);

for (auto i : name)
{if (!isspace(i)){
auto search = example.find(i);
sum+=search->second;
count++;
cout << search->first <<" = " <<search->second<<endl;
}}

cout << "\nTotal ammount of characters: " << count << endl;
mean = sum/count;
cout << mean << " is the mean." <<endl; // the mean is right !!
 cout << sum<< " is the sum."<<endl;	//the sum is right !!

//sqretotal increment
double sqretotal = 0.0;
for (auto j : name)
{
auto seal = example.find(j);
if (seal->second != NULL)
sqretotal+= pow(seal->second - mean,2);
}


//float stddev = sqrt(sqretotal/count);	 //comment this line out if the calculation is for a Sample
	
int sample = count-1;                 	 // comment this line out if the calculation is for a Population
float stddev = sqrt(sqretotal/sample);	// comment this line out if the calculation is for a Population

	
	
cout << stddev << " is the entry's standard deviation" << endl;


if(stddev<=1.5){
cout << "and 'A' is its corresponding letter.\n"<< endl;return 0;}

if(stddev<=2.5){
cout << "and 'B' is its corresponding letter.\n"<< endl;return 0;}

if(stddev<=3.5){
cout << "and 'C' is its corresponding letter.\n"<< endl;return 0;}

if(stddev<=4.5){
cout << "and 'D' is its corresponding letter.\n"<< endl;return 0;}

if(stddev<=5.5){
cout << "and 'E' is its corresponding letter.\n"<< endl;return 0;}

if(stddev<=6.5){
cout << "and 'F' is its corresponding letter.\n"<< endl;return 0;}

if(stddev<=7.5){
cout << "and 'G' is its corresponding letter.\n"<< endl;return 0;}

if(stddev<=8.5){
cout << "and 'H' is its corresponding letter.\n"<< endl;return 0;}

if(stddev<=9.5){
cout << "and 'I' is its corresponding letter.\n"<< endl;return 0;}

if(stddev<=10.5){
cout << "and 'J' is its corresponding letter.\n"<< endl;return 0;}

if(stddev<=11.5){
cout << "and 'K' is its corresponding letter.\n"<< endl;return 0;}

if(stddev<=12.5){
cout << "and 'L' is its corresponding letter.\n"<< endl;return 0;}

if(stddev=13.5){
cout << "and 'M' is its corresponding letter.\n"<< endl;return 0;}

if(stddev=14.5){
cout << "and 'N' is its corresponding letter.\n"<< endl;return 0;}

if(stddev=15.5){
cout << "and 'O' is its corresponding letter.\n"<< endl;return 0;}

if(stddev=16.5){
cout << "and 'P' is its corresponding letter.\n"<< endl;return 0;}

if(stddev=17.5){
cout << "and 'Q' is its corresponding letter.\n"<< endl;return 0;}

if(stddev=18.5){
cout << "and 'R' is its corresponding letter.\n"<< endl;return 0;}

if(stddev=19){
cout << "and 'S' is its corresponding letter.\n"<< endl;return 0;}

if(stddev=20){
cout << "and 'T' is its corresponding letter.\n"<< endl;return 0;}

if(stddev=21){
cout << "and 'U' is its corresponding letter.\n"<< endl;return 0;}

if(stddev=22){
cout << "and 'V' is its corresponding letter.\n"<< endl;return 0;}

if(stddev=23){
cout << "and 'W' is its corresponding letter.\n"<< endl;return 0;}

if(stddev=24){
cout << "and 'X' is its corresponding letter.\n"<< endl;return 0;}

if(stddev=25){
cout << "and 'Y' is its corresponding letter.\n"<< endl;return 0;}

if(stddev=26){
cout << "and 'Z' is its corresponding letter.\n"<< endl;return 0;}
	
return 0;
	}
	
