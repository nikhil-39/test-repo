#include<bits/stdc++.h>
using namespace std;


void delete(List*head,int k){
    
    List*temp=head;
    List*prev=head;
    while(temp!=NULL){
        if(temp->val==k){
            prev->next=temp->next;
            temp->next=NULL;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }

}




int main(int argc, char const *argv[])
{
    string s="nsciniencoenwicniown";
    unordered_map<char,bool>mp;
    

    
    for(int i =0;i<s.length();i++){
        if(!mp[s[i]]){
           mp[s[i]]=true;
        }
        else 
            s
    }

    // string ans="";
    // for(auto val: mp){
    //     if(val.second==true){
    //         ans+=val.first;
    //     }
    // }

   // cout<<ans<<endl;
    return 0;
}
