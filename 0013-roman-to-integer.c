int romanToInt(char* s) {
    int s1=0,i=0;
    while (s[i]!=0){
        if( s[i]=='M'){
            s1+=1000;
        }else if(s[i]=='D'){
            s1+=500;
        }else if(s[i]=='C'){
            if(s[i+1]=='M'){
                s1+=900;
                i++;
            }else if(s[i+1]=='D'){
                s1+=400;
                i++;
            }else{
                s1+=100;
            }
        }else if(s[i]=='L'){
            s1+=50;
        }else if(s[i]=='X'){
            if(s[i+1]=='C'){
                s1+=90;
                i++;
            }else if(s[i+1]=='L'){
                s1+=40;
                i++;
            }else{
                s1+=10;
            }
        }else if(s[i]=='V'){
            s1+=5;
        }else if(s[i]=='I'){
            if(s[i+1]=='X'){
                s1+=9;
                i++;
            }else if(s[i+1]=='V'){
                s1+=4;
                i++;
            }else{
                s1+=1;
            }
        }
        i++;
    }
    return s1;
}