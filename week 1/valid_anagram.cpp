class Solution
 {
public:
bool isAnagram(string s, string t) {
int n= s.length();
int m= t.length();
int alpha[26]= {0};
for(int i=0; i<n;i++){
char ch = s[i];
int index= ch -'a';
alpha[index]++;
}
for(int i=0; i<m;i++){
char ch = t[i];
int index= ch -'a';
alpha[index]--;
}
for(int i=0; i<26;i++){
if(alpha[i]!=0){
return false;
}
}
return true;