#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(int argc,char *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long int n,m,q,a,b;
    long long int c;
    map<long long int,long long int> s;
    map<long long int,long long int>::iterator it,it1,it2,it3;
    cin >> n >> m >> q;
    long long int i;
    s.insert(pair<long long int,long long int>(0,0));
    for(i=0;i<=q;i++){
        if(i==q){
            a=n;
            b=m;
        }
        else{
            cin >> a >> b;
        }
        c=0;
        it=s.lower_bound(a);
        it1=it;
        it1--;
        if(it==s.end()){
            s[a]=0;
            it--;
        }
        else if(it1->second<=b){
            if(it->first!=a){
                s[a]=it1->second;
                it--;
            }
        }
        it2=it;
//        cout << it1->first << " " << it->first << endl;
        while(it!=s.begin()){
            if(it1->second<=b&&it->first<=a){
//                cout << 111111 << endl;
                c+=((it->first)-(it1->first))*(b-it1->second);
                if(it1==s.begin()){
                    it1->second=b;
                    break;
                }
            }
            else if(it->first<=a){
//                cout << 222222 << endl;
                if(it1->second<=b){
                    c+=((it->first)-(it1->first))*(b-it1->second);
                    it1->second=b;
//                    cout << 111111 << endl;
                    it1++;
                }
                else{
                    if(it->first!=it2->first&&it->second<=b){
                        it->second=b;
                        it1++;
                    }
                    else if(it->first!=it2->first){
                        it1++;
                    }
                }
                break;

            }

            if(it1==s.begin()){
                break;
            }
            it1--;
            it--;

//            cout << c << endl;
        }
        it1++;
//        cout << it->first << " " << it1->first << " " << it2->first << endl;
        if(it1->first!=it2->first){
            s.erase(it1,it2);
        }
        if(c==0&&i!=q){
            cout << "QAQ" << '\n';
        }
        else{
            cout << c << '\n';
        }
/*
        for(it=s.begin();it!=s.end();it++){
            cout << "(" << it->first << "," << it->second << ")" << endl;
            if(it==s.end()){
                break;
            }
        }
*/
    }

    return 0;
}
