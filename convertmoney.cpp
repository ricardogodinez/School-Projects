#include <iostream>
#include <iomanip>
using namespace std;


// This program will input American money and convert it to foreign currency

// Ricardo Godinez

void  convertMulti(float dollars, const float& euros, const float& pesos);
void  convertMulti(float dollars, const float& euros, const float& pesos, const float& yen);
float convertToYen(float dollars, const float yen);
float convertToEuros(float dollars, const float euros);
float convertToPesos(float dollars, const float pesos);

float dollars;
const float euros=1.06;
const float pesos=9.73;
const float yen=124.35;
float euros_result, pesos_result, yen_result;

int main ()
{
    
	cout << fixed << showpoint << setprecision(2);
    
	cout << "Please input the amount of American Dollars you want converted " 
		 << endl;
	cout << "to euros and pesos" << endl;
	cin >> dollars;
	
    convertMulti(dollars, euros, pesos);
    cout<<"$"<<dollars<<" is converted to "<<euros<<" euros and "<<pesos<<" pesos"<<endl;
    
	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to euros, pesos and yen" << endl;
	cin >> dollars;
    
    convertMulti(dollars, euros, pesos, yen);
    cout<<"$"<<dollars<<" is converted to "<<euros<<" euros, "<<pesos<<" pesos, and "<<yen<<" yen"<<endl;
	
	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to yen" <<endl;
	cin >> dollars;
	
    
    cout<<"$"<<dollars<<" is converted to "<<convertToYen(dollars, yen)<<" yen"<<endl;
	
	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to euros" << endl;
	cin  >> dollars;
	
   
    cout<<"$"<<dollars<<" is converted to "<<convertToEuros(dollars, euros)<<" euros"<<endl;
	
	
	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to pesos " << endl;
	cin >> dollars;
	
    
    cout<<"$"<<dollars<<" is converted to "<<convertToPesos(dollars, pesos)<<" pesos"<<endl;
	

	return 0;
}

void  convertMulti(float dollars, float& euros, float& pesos)

{     
	cout << "The function convertMulti with dollars, euros and pesos "
		 << endl <<" was called with " << dollars <<" dollars" << endl << endl;
    
    euros=dollars*euros;
    pesos=dollars*pesos;
}

void  convertMulti(float dollars, float& euros, float& pesos, float& yen)

{

	cout << "The function convertMulti with dollars, euros, pesos and yen"
		 << endl << " was called with " << dollars << " dollars" << endl << endl;

    euros=dollars*euros;
    pesos=dollars*pesos;
    yen=dollars*yen;
}

float convertToYen(float dollars, const float yen)

{
    return yen*dollars;
}

float convertToEuros(float dollars, const float euros)
{
	return dollars*euros;
}

float convertToPesos(float dollars, const float pesos)

{
    return dollars*pesos;
}

