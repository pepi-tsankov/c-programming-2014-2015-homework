#include<stdio.h>
#include<string.h>

struct data{
float fl;
char sign;
int wich;
};

struct stack{
struct data dat[100];
int top;
};

void del(char *s,int n){
    int i,con;
    con=strlen(s);
    for(i=n;i<con;i++){
        s[i-n]=s[i];
    }
    for(i=con--;i>con-n;i--){
        s[i]=0;
    }
}

int isnum(char *s){
    int i;
    int num;
    int commas;
    num=0;
    commas=0;
    for(i=0;i<strlen(s);i++){
       if(s[i]<='9'&&s[i]>='0')num=1;else
       if(s[i]==',')commas++;else{
        return 0;
       }
    }
    if(commas<=1&&num)return 1;
    return 0;
}

int search(char *s,char c){
    int i;
    for(i=0;i<strlen(s)&&s[i]!=c;i++){}
    return i+1;
}

void copy(char*s1,char*s2,int n){
    int i;
    for(i=0;i<n;i++){
        s2[i]=s1[i];
    }
    del(s1,n);
}
int getsign(char*s){
if(strlen(s)==1){
    if(s[0]=='+')return 1;
    if(s[0]=='-')return 2;
    if(s[0]=='*')return 3;
    if(s[0]=='/')return 4;
}
return 0;
}

struct data todata(char *s){
    struct data dta;
    if(isnum(s)){
        dta.wich=1;
        dta.fl=atof(s);
    }else if(getsign(s)){
        dta.wich=2;
        dta.sign=getsign(s);
    }else dta.wich=0;
    return dta;
}

int tostack(struct stack *st,char*s,int i){
    (*st).dat[i]=todata(s);
    if((*st).dat[i].wich!=0)return 1;
    return 0;
}

int turn(struct stack *st,char*s){
int i;
int ret=1;
for(i=0;strlen(s);i++){
char s1[1000];
copy(s,s1,search(s,' '));
ret=ret&&tostack(st,s,i);
}
return ret;
}
int fail;
int smqtane(struct stack st){
struct stack st1;
fail=0;
int i;
for(i=0;i;i++){
    if(st.dat[i].wich==1){
        st1.dat[st1.top].fl=st.dat[i].fl;
        st1.top++;
    }else{
    if(st.top<=1){fail=1;return 0;}
    st1.top-=2;
    if(st1.dat[i].sign==1)st1.dat[st1.top].fl=st1.dat[st1.top].fl+st1.dat[st1.top++].fl;
    if(st1.dat[i].sign==2)st1.dat[st1.top].fl=st1.dat[st1.top].fl-st1.dat[st1.top++].fl;
    if(st1.dat[i].sign==3)st1.dat[st1.top].fl=st1.dat[st1.top].fl*st1.dat[st1.top++].fl;
    if(st1.dat[i].sign==4)st1.dat[st1.top].fl=st1.dat[st1.top].fl/st1.dat[st1.top++].fl;
    }
}
if(st.top==0){
    return st1.dat[0].fl;
}
    fail=1;
    return 0;
}
char s[1000];
int main(){
    scanf("%[^\n]", s);
    struct stack st;
    int i=turn(&st,s);
    float r=smqtane(st);
    if((!i)&&fail&&(!r)){
            printf("Incorect input");
        return 0;
    }
    printf("%f\n",r);
    return 0;
}
