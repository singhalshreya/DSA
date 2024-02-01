#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[], stack<int> &st, int visited[], int i){
	    visited[i]=1;
	    for(auto it : adj[i]){
	        if(visited[it]==0){
	            dfs(adj,st,visited,it);
	        }
	    }
	    st.push(i);
	}
	
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    int visited[V] = {0};
	    stack<int> st;
	    
	    for(int i=0;i<V;i++){
	        if(visited[i]==0){
	            dfs(adj,st,visited,i);
	        }
	    }
	    vector<int> ans;
	    for(int i=0;i<V;i++){
	        int val = st.top();
	        ans.push_back(val);
	        st.pop();
	    }
	    return ans;
	}

    int main(){
        
    }