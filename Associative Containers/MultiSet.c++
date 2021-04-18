#include<iostream>
#include<set>
#include<iterator>


using namespace std;

void printMultiSet(multiset<int> m){

    multiset<int> :: iterator itr;

    for(auto itr = m.begin();itr!=m.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<"\n";
}


int main(){

    
    multiset<int> ms;



    while(1){


        cout<<"1.Insert an element in a MultiSet\n";
        cout<<"2.Print the MultiSet\n";
        cout<<"3.Print size of the Multiset\n";
        cout<<"4.Exit\n";
        int opt;
        cin>>opt;

        switch (opt)
        {
        case 1:
            cout<<"Enter the Key to insert\n";
            int key;
            cin>>key;
            ms.insert(key);
            break;

        case 2:
            cout<<"Set:"<<" ";
            printMultiSet(ms);
            break;

        case 3:
            cout<<"Size of Multiset is :";
            cout<<ms.size();
            break;

        case 4:
            exit(1);
        }
    }


}