#include<iostream>
using namespace std;
int main()
{
    int first,second;
    cout<<"1.Breakfast\n2.Lunch\n3.Dinner\n";
    cout<<"Enter your choice:";
    cin>>first;
    switch(first)
    {
        case 1:
        cout<<"1. Tea\n2. Coffee\n3. Milk\n4. Smoothie\n5. Sandwich\n";
        cout<<"Enter your choice:";
        cin>>second;
        switch(second)
        {
            case 1:
                cout<<"You have selected Tea for Breakfast";
                break;
            case 2:
                cout<<"You have selected Coffee for Breakfast";
                break;
            case 3:
                cout<<"You have selected Milk for Breakfast";
                break;
            case 4:
                cout<<"You have selected Smoothie for Breakfast";
                break;
            case 5:
                cout<<"You have selected Sandwich for Breakfast";
                break;
            default:
                cout<<"Invalid choice for Breakfast";
                break;
        }
        break;
        case 2:
        cout<<"1. Rice\n2. Roti\n3. Dal\n4. Curry\n5. Salad\n";
        cout<<"Enter your choice:";
        cin>>second;
        switch(second)
        {
            case 1:
                cout<<"You have selected Rice for Lunch";
                break;
            case 2:
                cout<<"You have selected Roti for Lunch";
                break;
            case 3:
                cout<<"You have selected Dal for Lunch";
                break;
            case 4:
                cout<<"You have selected Curry for Lunch";
                break;
            case 5:
                cout<<"You have selected Salad for Lunch";
                break;
            default:
                cout<<"Invalid choice for Lunch";
                break;
        }
        break;
        case 3:
        cout<<"1. Paneer Makhani\n2. Masala Dosa\n3. Mix Veg\n4. Mushroom Chilly\n5. Aloo Jeera\n";
        cout<<"Enter your choice:";
        cin>>second;
        switch(second)
        {
            case 1:
                cout<<"You have selected Paneer Makhani for Dinner";
                break;
            case 2:
                cout<<"You have selected Masala Dosa for Dinner";
                break;
            case 3:
                cout<<"You have selected Mix Veg for Dinner";
                break;
            case 4:
                cout<<"You have selected Mushroom Chilly for Dinner";
                break;
            case 5:
                cout<<"You have selected Aloo Jeera for Dinner";
                break;
            default:
                cout<<"Invalid choice for Dinner";
                break;
        }
        break;
        default:
            cout<<"Invalid choice";
            break;
    }
    return 0;
}
