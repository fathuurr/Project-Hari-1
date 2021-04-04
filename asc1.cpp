#include <iostream>
#include <conio.h>

using namespace std; 

int main (){
	int i,j,n;
	int arr[50];
	int tmp;
	
	cout << "ALGORITMA ASSCENDING BUBBLE SORT";
	cout <<"\n________________________________";
	
	cout<< "\n MASUKAN JUMLAH DATA = ";
	cin >>n;
	for (i=1;i<=n;i++){
		cout <<"input data ke-"<<i<<"=" ;
		cin>> arr[i];
           }
    for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
    	if (arr[i] > arr[j])
		{
    		tmp=arr[j];
    		arr[j]=arr[i];
    		arr[i]=tmp;
	}
	}
	}
	cout <<"hasil pengurutan Assceding";
	cout <<"\n";
	
	for (i=1;i<=n;i++){
		cout <<"\tElement"<<i<<"="<<arr[i]<<endl;
	}       
	getch();
	}
