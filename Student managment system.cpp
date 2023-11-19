#include<bits/stdc++.h>
using namespace std;
string arr1[50],arr2[50],arr3[50],arr4[50],arr5[50];
int total=0;
void enter()
{
    int choice;
    cout<<"How many do you went to store\n";
    cin>>choice;
    if(total==0)
{
    total+=choice;
    for(int i=0;i<choice;i++)
    {
        cout<<"Enter data of student number "<<i+1<<endl;
        cout<<"Enter name\n";
        cin>>arr1[i];
        cout<<"Enter roll\n";
        cin>>arr2[i];
        cout<<"Enter course\n";
        cin>>arr3[i];
        cout<<"Enter class\n";
        cin>>arr4[i];
        cout<<"Enter contect\n";
        cin>>arr5[i];
    }
}
else
{
    for(int i=total;i<choice+total;i++)
    {
        cout<<"Enter data of student number "<<i+1<<endl;
        cout<<"Enter name\n";
        cin>>arr1[i];
        cout<<"Enter roll\n";
        cin>>arr2[i];
        cout<<"Enter course\n";
        cin>>arr3[i];
        cout<<"Enter class\n";
        cin>>arr4[i];
        cout<<"Enter contect\n";
        cin>>arr5[i];
    }
    total+=choice;
}
}
void show()
{
    int i;
    if(total==0)
    {
        cout<<"No data is available\n";
        return;
    }
    for(i=0;i<total;i++)
    {
        cout<<"Data of Student no "<<i+1<<endl;
        cout<<"Name is="<<arr1[i]<<endl;
        cout<<"Roll no="<<arr2[i]<<endl;
        cout<<"Course="<<arr3[i]<<endl;
        cout<<"Class="<<arr4[i]<<endl;
        cout<<"Contact="<<arr5[i]<<endl;
    }
}
void searchdata()
{
    if(total==0)
    {
        cout<<"No data is available\n";
        return;
    }
    cout<<"Enter roll number of student which you went to search\n";
    string roll;
    cin>>roll;
    int i;
    for(i=0;i<total;i++)
    {
        if(roll==arr2[i])
        {
        cout<<"Data of Student no "<<i+1<<endl;
        cout<<"Name is="<<arr1[i]<<endl;
        cout<<"Roll no="<<arr2[i]<<endl;
        cout<<"Course="<<arr3[i]<<endl;
        cout<<"Class="<<arr4[i]<<endl;
        cout<<"Contact="<<arr5[i]<<endl;
        break;
        }
    }
}
void update()
{
    if(total==0)
    {
        cout<<"No data is available\n";
        return;
    }
   string roll;
    int i;
    cout<<"Enter roll which student you went to update\n";
    cin>>roll;
    for(i=0;i<total;i++)
    {
        if(roll==arr2[i])
        {
        cout<<"Previous data\n";
        cout<<"Data of Student no "<<i+1<<endl;
        cout<<"Name is="<<arr1[i]<<endl;
        cout<<"Roll no="<<arr2[i]<<endl;
        cout<<"Course="<<arr3[i]<<endl;
        cout<<"Class="<<arr4[i]<<endl;
        cout<<"Contact="<<arr5[i]<<endl;
        cout<<"Enter new data\n";
        cout<<"Enter name\n";
        cin>>arr1[i];
        cout<<"Enter roll\n";
        cin>>arr2[i];
        cout<<"Enter course\n";
        cin>>arr3[i];
        cout<<"Enter class\n";
        cin>>arr4[i];
        cout<<"Enter contact\n";
        cin>>arr5[i];

        }
    }
}
void deleterecord()
{
    if(total==0)
    {
        cout<<"No data is available\n";
        return;
    }
    int a;
    cout<<"Enter 1 for full delete\n";
    cout<<"Enter 2 for delete specific record\n";
    cin>>a;
    if(a==1)
    {
        total=0;
        cout<<"All record delete\n";
    }
    else
    {
        string roll;
        cout<<"Enter roll\n";
        cin>>roll;
        for(int i=0;i<total;i++)
        {
            if(roll==arr2[i])
            {
                for(int j=i;j<total;j++)
                {
                    arr1[j]=arr1[j+1];
                    arr2[j]=arr2[j+1];
                    arr3[j]=arr3[j+1];
                    arr4[j]=arr4[j+1];
                    arr5[j]=arr5[j+1];
                }
                total--;
                cout<<"Your required record is deletetes\n";
            }
        }

    }

}
int main()
{
    int value;
    while(true)
    {
    cout<<"Press 1 for enter data\n";
    cout<<"Press 2 for show data\n";
    cout<<"Press 3 for search data\n";
    cout<<"Press 4 to update data\n";
    cout<<"Press 5 for delete data\n";
    cout<<"Press 6 to exit\n";
    cin>>value;
    switch(value)
    {
    case 1:
        {
            enter();
            break;
        }
    case 2:
        {
            show();
            break;
        }
    case 3:
        {
            searchdata();
            break;
        }
    case 4:
        {
            update();
            break;
        }
    case 5:
        {
            deleterecord();
            break;
        }
    case 6:
        {
            exit(0);
            break;
        }
    default:
        {
            cout<<"Invalid input\n";
            break;
        }
    }
    }
}
