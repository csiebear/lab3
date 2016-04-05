#include <iostream>
#include <vector>

using namespace std;
void sort(int,vector<int>&);

int main(){
	int n,temp,top5Weight;//the number of cows
	cin>>n;
	cout<<n<<endl;//test read
	vector<int> weight(n);
	//read the n line data for sort(compete the heaviness)
	for(int i=0;i<n;i++){
		cin>>temp;
		weight.at(i)=temp;
	//	cout<<"v.at"<<i<<weight.at(i)<<endl;//test read
	}
	//sort the n data int the vector weight
	sort(n,weight);
	for(int j=0;j<5;j++){
		//after sort
		cout<<weight.at(j)<<endl;
		top5Weight+=weight.at(n-j-1);
	}
	//output the result of the sum of top5 weight
	cout<<top5Weight;
	return 0;
}

//the sort function is refer the lecture page 20 
void sort(int size,vector<int>&v){
	int insert,next,moveItem;
	for(next=0;next<size;++next){
		insert=v.at(next);
		moveItem=next;
		while( (moveItem>0) &&(v.at(moveItem-1)>insert) ){
			v.at(moveItem)=v.at(moveItem-1);
			--moveItem;
		}
		v.at(moveItem)=insert;
	}
}
