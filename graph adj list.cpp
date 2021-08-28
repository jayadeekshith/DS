#include <bits/stdc++.h>
using namespace std;
class Graph{
    int v;
    list<int> *l;
    
    public:
    Graph(int v){
        this->v=v;
        l= new list<int>[v];
    }

  void  addedge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void printadjlist(){
        for(int i=0;i<v;i++){
            cout<<i<<"->";
            for(auto it:l[i]){
                cout<<it<<",";
            }
            cout<<endl;
        }
    }
};

int main() {
    int n;
    cout<<"enter graph size: "<<endl;
    cin>>n;
	Graph g(n);
	int a,b;
	while(n--){
	cin>>a>>b;
	g.addedge(a,b);
	}
	g.printalist();
	return 0;
}
