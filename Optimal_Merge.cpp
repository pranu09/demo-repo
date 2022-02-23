#include<bits/stdc++.h>
using namespace std;

int solution(int n, int file[])
{
	priority_queue<int, vector<int>, greater<int>> pq;
	for(int i=0; i<n; i++)
	{
		pq.push(file[i]);
	}
	int ct = 0;
	while(pq.size() > 1)
	{
		int first = pq.top();
		pq.pop();
		int second = pq.top();
		pq.pop();
		
		int temp = first + second;
		ct += temp;
		pq.push(temp);
	}
	return ct;
}



int main()
{
	int n;
	cout<<"Enter the Total Number of files: \t";
	cin>>n;
	int file[n];
	for(int i=0; i<n; i++)
	{
		cout<<"Enter the Size of File "<<i+1<<":\t";
		cin>>file[i];
	}
	cout<<"The Optimal Cost is: "<<solution(n, file)<<endl;
	return 0;
}
