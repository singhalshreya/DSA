#include<iostream>
using namespace std;
void merge(int *a, int *b, int*c, int s, int e){
	int m= (s+e)/2;
	int i= s, j=m+1, k=s;

	while(i<= m && j<=e){
		if(b[i]> c[j]){
			a[k++] = c[j++];
		}else{
			a[k++] = b[i++];
		}
	}
	while(i<=m){
		a[k++] = b[i++];
	}
	while(j<=e){
		a[k++] = c[j++];
	}	
}
void mergesort(int *a, int s, int e){
	if(s>=e){
		return;
	}
	//recursive case
	//1. divide

	int b[10000], c[10000];
	int m = (s+e)/2;
	for(int i =s; i<=m; ++i){
		b[i]= a[i];
	}
	for(int i = m+1; i<=e; ++i){
		c[i]=a[i];
	}
	//2. sort
	mergesort(b, s, m);
	mergesort(c, m+1, e);
	//3. merge two sorted arrays b and c
	merge(a,b,c,s,e);
}
int main(){
	int a[]={3,6,8,9,10};
	int n= sizeof(a)/sizeof(int);

	mergesort(a,0,n-1);
	for (int i=0; i<n; ++i){
		cout<<a[i]<<" ";

	}
	cout<<endl;
	return 0;

}