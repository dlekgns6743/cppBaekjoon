#include<bits/stdc++.h>
using namespace std;
int n;
void rec(int N){
    int a = n-N;
    if(N == 0){
                for(int i=0; i<a; i++){
            cout<<"____";
        }
        cout<<"\"����Լ��� ������?\"\n";
                for(int i=0; i<a; i++){
            cout<<"____";
        }
        cout<<"\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
                for(int i=0; i<a; i++){
            cout<<"____";
        }
        cout<<"��� �亯�Ͽ���.\n";
        return;
    }
    else{
        for(int i=0; i<a; i++){
            cout<<"____";
        }
        cout<<"\"����Լ��� ������?\"\n";
                for(int i=0; i<a; i++){
            cout<<"____";
        }
        cout<<"\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
                for(int i=0; i<a; i++){
            cout<<"____";
        }
        cout<<"���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
                for(int i=0; i<a; i++){
            cout<<"____";
        }
        cout<<"���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";        
        }
    rec(N-1);
            for(int i=0; i<a; i++){
            cout<<"____";
        }
    cout<<"��� �亯�Ͽ���.\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    cout<<"��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
    rec(n);

}