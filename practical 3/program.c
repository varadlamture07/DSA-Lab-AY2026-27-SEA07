// Searching contact name using Sequential and Binary Search
#include <stdio.h>
#include <string.h>

typedef struct contact{
    char name[20];
    char phone[20];
    char address[20];
}contact;

void main(){
    contact c[20];
    int n, i;
    int lincom = 0;
    int linfound = 0;
    int bincom = 0;
    char key[20];
    
    printf("Enter number of contacts: ");
    scanf("%d", &n);
    
    printf("\n---//ENTER CONTACT DETAILS (A-Z)//---\n");
    for(i = 0; i < n; i++){
        printf("\n~~~Contact %d~~~\n", i+1);
        printf("Name: ");
        scanf("%s", &c[i].name);
        printf("Contact: ");
        scanf("%s", &c[i].phone);
        printf("Address: ");
        scanf("%s", &c[i].address);
    }

    printf("\n---//DISPLAYING CONTACTS//---\n");
    for(i = 0; i < n; i++){
        printf("\n~~~Contact %d~~~", i+1);
        printf("\nName: %s", c[i].name);
        printf("\nContact: %s", c[i].phone);
        printf("\nAddress: %s", c[i].address);
    }
    printf("\n\n---//END//---\n\n");

    printf("Enter name of contact to search: ");
    scanf("%s", &key);

    printf("\n---//Linear Search//---");
    for(i = 0; i < n; i++){
        lincom++;
        if(strcasecmp(key, c[i].name)==0){
            printf("\nCONTACT FOUND");
            printf("\nName: %s", c[i].name);
            printf("\nContact: %s ", c[i].phone);
            printf("\nAddress: %s", c[i].address);
            linfound = 1;
            break;
        }
    }
    if(linfound == 0){
        printf("\nCONTACT NOT FOUND");
    }

    printf("\nLinear comparisons: %d", lincom);
    printf("\n\n---//Binary Search//---");

    //Sorting Contact List to apply binary search
    char temp[20]; 
    strcpy(temp, c[0].name);
    for(int i = 0; i < n; i++){
        for(int j = 0; j <  n-i-1; j++){
            if(strcasecmp(c[j].name, c[j+1].name) > 0){
                strcpy(temp, c[j].name);
                strcpy(c[j].name, c[j+1].name);
                strcpy(c[j+1].name, temp);
            }
        }
    }

    int high = n-1;
    int low = 0;
    int mid;

    while(low <= high){
        mid = (high+low)/2;
        if(strcasecmp(c[mid].name, key) == 0){
            bincom++;
            printf("\nContact found at location %d", mid+1);
            break;
        }else if(strcasecmp(c[mid].name, key)<0){
            bincom++;
            low = mid+1;
        }else{
            bincom++;
            high = mid-1;
        }
    }
    if(low>high){
        printf("\nContact not found");
    }

    printf("\nNumber of binary comparisons: %d", bincom);

}
