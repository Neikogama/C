#include <iostream>
using namespace std;
void nhap(int ar[],int &n);
void xuat(int ar[], int n);
int main()
{
	int n;
	int ar[100];
	nhap(ar,n);
}

void nhap(int ar[],int &n)
{
	cout<<"nhap n: ";
	cin>>n;

	for(int i = 0; i < n; i++)
	{
		cout<<" nhap phan tu thu: "<<i + 1<<" "<<endl;
		cin>>ar[i];
	}
}

void xuat(int ar[], int n)
{
	for(int i = 0; i < n ; i++)
	{
	cout<<ar[i]<<" ";
	}
}
