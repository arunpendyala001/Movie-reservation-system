
Conversation opened. 1 unread message.

Skip to content
Using Gmail with screen readers
Search



Gmail
COMPOSE
Labels
Inbox (2,063)
Starred
Important
Sent Mail
Drafts (7)
Circles
[Imap]/Sent
Notes
More
  More
1 of 2,582

Print all In new window
movie reservation
Inbox
x

sai akhil pendyala
Attachments11:14 PM (9 minutes ago)

to me
Attachments area

Click here to Reply or Forward
7.43 GB (49%) of 15 GB used
Manage
Terms - Privacy
Last account activity: 0 minutes ago
Details
saiakhilphotography5@gmail.com
Friends

Show details


#include<iostream>
using namespace std;
class movie
{
private:

public:
std::string list[40]; // list of movies
int count = 0;// number of movies
    void add()
    {
        cout<<"enter new movie name(lower case): ";
        cin>>list[count++];// equivalent to cin>>list[count]; count++;
    }
    void Delete()
    {
        std::string temp_list[40];// temporary list storing movies (entered movie deleted)
        std::string temp;// temporary string to store the entered movies name
        cout<<"enter movie name to be deleted(lower case): "<<endl;
        cin>>temp;
        bool found = false; //to check if the enter movie name exists in the list

        for(int i=0,j=0;i<count;i++){
          if(list[i] != temp){
            temp_list[j] = list[i];
            j++;
          }else{
            found = true;
          }
        }

        if(found){
          count--;
            for(int i=0;i<count;i++){
              list[i] = temp_list[i];
            }
        }else{
          cout<<"movie not found! Try again"<<endl;
        }

    }

    void display(){
        for(int i=0;i<count;i++){
          cout<<list[i]<<endl;
        }
    }
};
int main()
{
    movie m;
    int r,i,j;
   m.list[0] = "dangal";
   m.list[1] = "logan";
   m.list[2] = "blood diamond";
   m.count += 3;
    while(true)

    {   for(int i=0;i<38;i++){
            cout<<"-";
          }
        cout<<endl;
        cout<<"| To see the list of movies press 1. |\n";
        cout<<"| To add a movie press 2.            |\n";
        cout<<"| To delete a movie press 3.         |\n";
        cout<<"| To exit press 0.                   |\n";
        for(int i=0;i<38;i++){
                cout<<"-";
              }
        cout<<endl;
        cin>>i;
        if(i==1)
        {
            m.display();
        }
        else if(i==2)
        {
                m.add();
        }
        else if(i==3)
        {
              m.Delete();
        }
        else{
          break;
        }
    }
    return 0;

}
arun.cpp
Open with
Displaying arun.cpp.
