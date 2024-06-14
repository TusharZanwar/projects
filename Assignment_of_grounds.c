#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Ground {             //details about the grounds
    char groundname[50];
    char city[50];
    char state[50];
    char games[50];
    char dates[50];
    char time[50];
    int hourlyrate;
}grounds[100];

struct temp{                //temporary struct for sorting
    char gn[50];
    char c[50];
    char st[50];
    char g[50];
    char d[50];
    char t[50];
    int h;
}c[100];

struct list {               //to take inputs of ground-list and game-list
    char ground[50];
    char game[50];
}lists[100];

void mergeself(struct Ground grounds[],int l,int m,int n, struct temp c[])
{
    int i,j,k;
    i=l;j=m+1;k=l;
    while(i<m && j<n)
    {
        if(strcmp(grounds[i].dates,grounds[j].dates)<0)                     //sorting of the data based on dates 
        {
            strcpy(c[k].gn,grounds[i].groundname);
            strcpy(c[k].c,grounds[i].city);
            strcpy(c[k].st,grounds[i].state);
            strcpy(c[k].g,grounds[i].games);
            strcpy(c[k].d,grounds[i].dates);
            strcpy(c[k].t,grounds[i].time);
            c[k].h=grounds[i].hourlyrate;
            k++;i++;
        }
        else{
            strcpy(c[k].gn,grounds[j].groundname);
            strcpy(c[k].c,grounds[j].city);
            strcpy(c[k].st,grounds[j].state);
            strcpy(c[k].g,grounds[j].games);
            strcpy(c[k].d,grounds[j].dates);
            strcpy(c[k].t,grounds[j].time);
            c[k].h=grounds[j].hourlyrate;
            k++;j++;
        }
    }
    if(i<=m)
    {
        while(i<=m)
        {
            strcpy(c[k].gn,grounds[i].groundname);
            strcpy(c[k].c,grounds[i].city);
            strcpy(c[k].st,grounds[i].state);
            strcpy(c[k].g,grounds[i].games);
            strcpy(c[k].d,grounds[i].dates);
            strcpy(c[k].t,grounds[i].time);
            c[k].h=grounds[i].hourlyrate;
            k++;i++; 
        }
    }
    else {
            strcpy(c[k].gn,grounds[j].groundname);
            strcpy(c[k].c,grounds[j].city);
            strcpy(c[k].st,grounds[j].state);
            strcpy(c[k].g,grounds[j].games);
            strcpy(c[k].d,grounds[j].dates);
            strcpy(c[k].t,grounds[j].time);
            c[k].h=grounds[j].hourlyrate;
            k++;j++;
    }
    i=l;
    while(i<=n)
    {
        strcpy(grounds[i].groundname,c[j].gn);
        strcpy(grounds[i].city,c[j].c);
        strcpy(grounds[i].state,c[j].st);
        strcpy(grounds[i].games,c[j].g);
        strcpy(grounds[i].dates,c[j].d);
        strcpy(grounds[i].time,c[j].t);
        grounds[i].hourlyrate=c[j].h;
        i++;
    }
}

void mergeself1(struct Ground grounds[],int l,int m,int n, struct temp c[])
{
    int i,j,k;
    i=l;j=m+1;k=l;
    while(i<m && j<n)
    {
        if(strcmp(grounds[i].city,grounds[j].city)<0)                     //sorting of data based on alphabetical order of name of city
        {
            strcpy(c[k].gn,grounds[i].groundname);
            strcpy(c[k].c,grounds[i].city);
            strcpy(c[k].st,grounds[i].state);
            strcpy(c[k].g,grounds[i].games);
            strcpy(c[k].d,grounds[i].dates);
            strcpy(c[k].t,grounds[i].time);
            c[k].h=grounds[i].hourlyrate;
            k++;i++;
        }
        else{
            strcpy(c[k].gn,grounds[j].groundname);
            strcpy(c[k].c,grounds[j].city);
            strcpy(c[k].st,grounds[j].state);
            strcpy(c[k].g,grounds[j].games);
            strcpy(c[k].d,grounds[j].dates);
            strcpy(c[k].t,grounds[j].time);
            c[k].h=grounds[j].hourlyrate;
            k++;j++;
        }
    }
    if(i<=m)
    {
        while(i<=m)
        {
            strcpy(c[k].gn,grounds[i].groundname);
            strcpy(c[k].c,grounds[i].city);
            strcpy(c[k].st,grounds[i].state);
            strcpy(c[k].g,grounds[i].games);
            strcpy(c[k].d,grounds[i].dates);
            strcpy(c[k].t,grounds[i].time);
            c[k].h=grounds[i].hourlyrate;
            k++;i++; 
        }
    }
    else {
            strcpy(c[k].gn,grounds[j].groundname);
            strcpy(c[k].c,grounds[j].city);
            strcpy(c[k].st,grounds[j].state);
            strcpy(c[k].g,grounds[j].games);
            strcpy(c[k].d,grounds[j].dates);
            strcpy(c[k].t,grounds[j].time);
            c[k].h=grounds[j].hourlyrate;
            k++;j++;
    }
    i=l;
    while(i<=n)
    {
        strcpy(grounds[i].groundname,c[j].gn);
        strcpy(grounds[i].city,c[j].c);
        strcpy(grounds[i].state,c[j].st);
        strcpy(grounds[i].games,c[j].g);
        strcpy(grounds[i].dates,c[j].d);
        strcpy(grounds[i].time,c[j].t);
        grounds[i].hourlyrate=c[j].h;
        i++;
    }
}

void mergeself2(struct Ground grounds[],int l,int m,int n, struct temp c[])
{
   int i,j,k;
    i=l;j=m+1;k=l;
    while(i<m && j<n)
    {
        if(grounds[i].hourlyrate < grounds[j].hourlyrate)                     //sorting of data based on increase of hourlyrate
        {
            strcpy(c[k].gn,grounds[i].groundname);
            strcpy(c[k].c,grounds[i].city);
            strcpy(c[k].st,grounds[i].state);
            strcpy(c[k].g,grounds[i].games);
            strcpy(c[k].d,grounds[i].dates);
            strcpy(c[k].t,grounds[i].time);
            c[k].h=grounds[i].hourlyrate;
            k++;i++;
        }
        else{
            strcpy(c[k].gn,grounds[j].groundname);
            strcpy(c[k].c,grounds[j].city);
            strcpy(c[k].st,grounds[j].state);
            strcpy(c[k].g,grounds[j].games);
            strcpy(c[k].d,grounds[j].dates);
            strcpy(c[k].t,grounds[j].time);
            c[k].h=grounds[j].hourlyrate;
            k++;j++;
        }
    }
    if(i<=m)
    {
        while(i<=m)
        {
            strcpy(c[k].gn,grounds[i].groundname);
            strcpy(c[k].c,grounds[i].city);
            strcpy(c[k].st,grounds[i].state);
            strcpy(c[k].g,grounds[i].games);
            strcpy(c[k].d,grounds[i].dates);
            strcpy(c[k].t,grounds[i].time);
            c[k].h=grounds[i].hourlyrate;
            k++;i++; 
        }
    }
    else {
            strcpy(c[k].gn,grounds[j].groundname);
            strcpy(c[k].c,grounds[j].city);
            strcpy(c[k].st,grounds[j].state);
            strcpy(c[k].g,grounds[j].games);
            strcpy(c[k].d,grounds[j].dates);
            strcpy(c[k].t,grounds[j].time);
            c[k].h=grounds[j].hourlyrate;
            k++;j++;
    }
    i=l;
    while(i<=n)
    {
        strcpy(grounds[i].groundname,c[j].gn);
        strcpy(grounds[i].city,c[j].c);
        strcpy(grounds[i].state,c[j].st);
        strcpy(grounds[i].games,c[j].g);
        strcpy(grounds[i].dates,c[j].d);
        strcpy(grounds[i].time,c[j].t);
        grounds[i].hourlyrate=c[j].h;
        i++;
    } 
}

void mergeself3(struct Ground grounds[],int l,int m,int n, struct temp c[])
{
    int i,j,k;
    i=l;j=m+1;k=l;
    while(i<m && j<n)
    {
        if(strcmp(grounds[i].groundname,grounds[j].groundname)<0)                     //sorting of the data based on alphabetical order of groundname
        {
            strcpy(c[k].gn,grounds[i].groundname);
            strcpy(c[k].c,grounds[i].city);
            strcpy(c[k].st,grounds[i].state);
            strcpy(c[k].g,grounds[i].games);
            strcpy(c[k].d,grounds[i].dates);
            strcpy(c[k].t,grounds[i].time);
            c[k].h=grounds[i].hourlyrate;
            k++;i++;
        }
        else{
            strcpy(c[k].gn,grounds[j].groundname);
            strcpy(c[k].c,grounds[j].city);
            strcpy(c[k].st,grounds[j].state);
            strcpy(c[k].g,grounds[j].games);
            strcpy(c[k].d,grounds[j].dates);
            strcpy(c[k].t,grounds[j].time);
            c[k].h=grounds[j].hourlyrate;
            k++;j++;
        }
    }
    if(i<=m)
    {
        while(i<=m)
        {
            strcpy(c[k].gn,grounds[i].groundname);
            strcpy(c[k].c,grounds[i].city);
            strcpy(c[k].st,grounds[i].state);
            strcpy(c[k].g,grounds[i].games);
            strcpy(c[k].d,grounds[i].dates);
            strcpy(c[k].t,grounds[i].time);
            c[k].h=grounds[i].hourlyrate;
            k++;i++; 
        }
    }
    else {
            strcpy(c[k].gn,grounds[j].groundname);
            strcpy(c[k].c,grounds[j].city);
            strcpy(c[k].st,grounds[j].state);
            strcpy(c[k].g,grounds[j].games);
            strcpy(c[k].d,grounds[j].dates);
            strcpy(c[k].t,grounds[j].time);
            c[k].h=grounds[j].hourlyrate;
            k++;j++;
    }
    i=l;
    while(i<=n)
    {
        strcpy(grounds[i].groundname,c[j].gn);
        strcpy(grounds[i].city,c[j].c);
        strcpy(grounds[i].state,c[j].st);
        strcpy(grounds[i].games,c[j].g);
        strcpy(grounds[i].dates,c[j].d);
        strcpy(grounds[i].time,c[j].t);
        grounds[i].hourlyrate=c[j].h;
        i++;
    }
}


void mergesort(struct Ground grounds[], int l, int h, struct temp c[])
{
    int m;
    if(l<h)
    {
        m=(l+h)/2;
        mergesort(grounds,l,m,c);
        mergesort(grounds,m+1,h,c);
        mergeself(grounds,l,m,h,c);
    }
}

void mergesort1(struct Ground grounds[], int l, int h, struct temp c[])
{
    int m;
    if(l<h)
    {
        m=(l+h)/2;
        mergesort1(grounds,l,m,c);
        mergesort1(grounds,m+1,h,c);
        mergeself1(grounds,l,m,h,c);
    }
}

void mergesort3(struct Ground grounds[], int l, int h, struct temp c[])
{
   int m;
    if(l<h)
    {
        m=(l+h)/2;
        mergesort3(grounds,l,m,c);
        mergesort3(grounds,m+1,h,c);
        mergeself3(grounds,l,m,h,c);
    }  
}


void getFixturesinCity(struct Ground grounds[], int l)
{   int i=0;
    char cityname[50],date[50];                                  
    mergesort3(grounds,0,l-1,c);                //sorts based on alphabetical order of groundname
    printf("Enter city name:");                
    scanf("%s", cityname);                           
    printf("Enter the date:");                      //format of date is dd/mm/yyyy
    scanf("%s",date);
    for(i=0;i<l;i++)
    {   
        if (strcmp( grounds[i].city,cityname)==0 && strcmp(date,grounds[i].dates)==0 );         //for same city and date as input
        {
            printf("%s %s\n", grounds[i].games, grounds[i].groundname);
        }
    }
}

void getFixturesSortedonDate(struct Ground grounds[], int l)
{
    mergesort(grounds,0,l-1,c);                     //sorts based on date
    for(int i=0;i<l;i++)
    printf("%s %s %s %s %s %s %d\n",grounds[i].games, grounds[i].groundname, grounds[i].city, grounds[i].state, grounds[i].dates, grounds[i].time, grounds[i].hourlyrate);
}

void isAvailable(struct Ground grounds[], int l)
{
    char igame[50],icity[50],itime[50];             //i in names stand for input 
    mergesort1(grounds,0,l-1,c);                    //sorts based on alphabetical of cityname
    printf("Enter gamename:");
    scanf("%s",igame);
    printf("Enter the date:");                      //format of date is dd/mm/yyyy
    scanf("%s",icity);
    printf("Enter the time:");                      //format of time is 24:00                    
    scanf("%s",itime);
    for(int i=0;i<l;i++)
    {
        if(strcmp(igame,grounds[i].games)==0)           //for same game as input
        {   int flag=0;
            for(int j=0;j<l;j++)
            {if(strcmp(icity,grounds[j].city)==0 && strcmp(itime,grounds[i].time)!=0) flag=1;}          //for having same city as input
                                                                                                        //shows time-slots that are not consumed
            if (flag==1)
            {
                printf("%s %s %s\n", grounds[i].groundname, grounds[i].city, grounds[i].state);   
            }
        }
    }
}

void UniqueSports(struct Ground grounds[], int l)
{
    char iground[50],icity[50];                 //i in names stand for input
    printf("Enter ground name:");
    scanf("%s",iground);
    printf("Enter cityname:");
    scanf("%s",icity);
    for(int i=0;i<l;i++){
        if(strcmp(icity,grounds[i].city)==0){                     //for same city as input  
            if(strcmp(iground,grounds[i].groundname)!=0){         //checks only for grounds other the one in input
                int ct=0;                                         // counter==ct
                for(int j=0;j<l;j++){
                    if(strcmp(grounds[i].games,grounds[j].games)==0) ct++;     //same games gives ct>0
                }
                if(ct==0) printf("The unique game is %s.\n",grounds[i].games);
            }
        }
    }
}

void FindLocationsForGameInTimeRange(struct Ground grounds[], int l)
{
    char igame[50],idate[50],itime[50];
    printf("Enter sportsname:");
    scanf("%s",igame);
    printf("Enter the date:");              //format for date is dd/mm/yyyy
    scanf("%s",idate);
    printf("Enter the time:");              //format for time is 24:00
    scanf("%s",itime);
    for(int i=0;i<l;i++)
    {
        if(strcmp(igame,grounds[i].games)==0){                                              //for same game as input
            if(strcmp(itime,grounds[i].time)!=0 && strcmp(idate,grounds[i].dates)==0){      //shows time-slots that are not consumed
                                                                                            //for same date as input
                printf("%s %s\n",grounds[i].groundname ,grounds[i].city);
            }
        }
    }
}
  
void ClashOfMatches(struct Ground grounds[], int l)
{
    int n,i;
    char idate[50],igame[50],tempground[50];
    printf("Enter length of list");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",lists[i].ground);
    }
    printf("Enter date:");              //format for date is dd/mm/yyyy
    scanf("%s",idate);
    printf("Enter the game:");         
    scanf("%s",igame);
    int ct=0;                               //counter==ct
    for(i=0;i<l;i++)
    {
        if (strcmp(idate,grounds[i].dates)==0 && strcmp(igame,grounds[i].games)==0)         //for same date and game as input
        {
            for(int j=0;j<n;j++)
            {
                if (strcmp(lists[j].ground,grounds[i].groundname)==0)               //for same ground-name in list(input) and main-list
                {
                    ct++;
                    if(ct==1) strcpy(tempground,lists[j].ground);                   //for clash ct should be greater than 1
                    else if(ct==2) printf("%s\n%s\n",tempground,lists[j].ground);
                    else printf("%s\n",lists[j].ground);
                }
            }
        }
    }
}

void GiveListOfGroundsHavingAtLeastKMatches(struct Ground grounds[], int l)
{
    char icity[50],idate[50];
    int n,k,i;
    printf("Enter length of list");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s", lists[i].game);
    }
    printf("Enter date city and k");
    scanf("%s",idate);
    printf("Enter the city:");
    scanf("%s",icity);
    printf("Enter k:");
    scanf("%d",&k);
    mergesort1(grounds,0,l-1,c);
    int ct=0;                               //counter==ct
    for(i=0;i<n;i++)
    {
        for(int j=0;j<l;j++)
        {
            if(strcmp(idate,grounds[i].dates)==0 && strcmp(icity,grounds[i].city)==0 && strcmp(grounds[i].games,lists[i].game)==0) ct++;
        }       //for same date and city as input
                //for same game-name in list(input) and main-list
    }
    if(ct==k)
    {
        for(i=0;i<l;i++)
        {
            if(strcmp(idate,grounds[i].dates)==0 && strcmp(icity,grounds[i].city)==0 && strcmp(grounds[i].games,lists[i].game)==0)
                               //to get same grounds which increased the counter
            {                      
                printf("%s",grounds[i].groundname);
            }     
        }
    }
}

void SortOnPriceForAGame(struct Ground grounds[], int l)
{
    mergesort1(grounds,0,l-1,c);
    char igame[50],idate[50],itime[50];
    int i;
    printf("Enter the gamename:");
    scanf("%s",igame);
    printf("Enter the date:");
    scanf("%s",idate);
    printf("Enter the time:");
    scanf("%s",itime);
    for(i=0;i<l;i++)
    {
        if(strcmp(igame,grounds[i].games)==0 && strcmp(idate,grounds[i].dates)==0 && strcmp(itime,grounds[i].time)!=0 ) 
                        //for same game and date as input
                        //shows time-slots that are not consumed
        {
            printf("%s %d\n",grounds[i].groundname ,grounds[i].hourlyrate);
        }
    }
}

int main()
{
    int n,t,ct;
    do{
        int i=0,l=0;
        t=0;
        printf("press 1 to add ground details and to schedule game.\n");
        printf("press 2 to list the games scheduled in the city.\n");
        printf("press 3 to get schedules based on dates.\n");
        printf("press 4 to have list of grounds available.\n");
        printf("press 5 to find unique sports of a ground.\n");
        printf("press 6 to find location for a game.\n");
        printf("press 7 to find clash of matches.\n");
        printf("press 8 to ground having k matches in a day.\n");
        printf("press 9 to list of grounds based on rate.\n");
        scanf("%d",&n);

        if (n==1){
            printf("enter ground details:\n");
            printf("Enter the groundname:");
            scanf("%s",grounds[i].groundname);
            printf("Enter the game:");
            scanf("%s",grounds[i].games);
            printf("Enter the city_name:");
            scanf("%s",grounds[i].city);
            printf("Enter the state:");
            scanf("%s",grounds[i].state);
            printf("Enter the date:");
            scanf("%s",grounds[i].dates);
            do{
                ct=0;
                printf("Enter the time:");
                scanf("%s",grounds[i].time);
                for(int j=0;j<i;j++)
                {
                    if(strcmp(grounds[i].time,grounds[j].time)==0 && strcmp(grounds[i].groundname,grounds[j].groundname)==0 && strcmp(grounds[i].city,grounds[j].city)==0 && strcmp(grounds[i].dates,grounds[j].dates)==0)
                        ct=1;
                }
                if(ct==1) printf("Time slot occupied.\n");
            }
            while(ct==1);
            printf("Enter the hourly rate:");
            scanf("%d",&grounds[i].hourlyrate);
            i++;l++;
        }
        else if (n==2) getFixturesinCity(grounds, l);
        else if (n==3) getFixturesSortedonDate(grounds, l);
        else if (n==4) isAvailable(grounds, l);
        else if (n==5) UniqueSports(grounds, l);
        else if (n==6) FindLocationsForGameInTimeRange(grounds, l);
        else if (n==7) ClashOfMatches(grounds, l);
        else if (n==8) GiveListOfGroundsHavingAtLeastKMatches(grounds, l);
        else if (n==9) SortOnPriceForAGame(grounds, l);
        else printf("Wrong Input\n");

        printf("to continue enter 1:");
        scanf("%d",&t);
    }
    while(t==1);
}