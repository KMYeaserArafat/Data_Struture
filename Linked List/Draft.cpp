#include <iostream> 
using namespace std;
struct node { 
    int data; 
    node *next; 
    }; 
int main() 
	{ 
	   int i, n, item;
       node *nptr, *tptr, *record; 
       record = NULL;
       cout << "Number of nodes: " << endl; 
       cin >> n;
       cout << "Enter data for node:" << endl;
	   for (int i = 0; i < n; i++) 
			{ 
	   cin >> item; nptr = new (node); 
	   nptr->data = item; 
	   nptr->next = NULL; 
	 if (record == NULL)
		{ 
	   record = nptr; tptr = nptr;
		} 
	   else 
		{ 
	   tptr->next = nptr; tptr = nptr;
    	}
		}
		tptr = record;
		for(int i = 0; i < n; i++) 
		{ 
		cout << endl;
		cout << tptr->data;
		tptr = tptr->next;
		} 
		cout << endl; 
		return 0; }