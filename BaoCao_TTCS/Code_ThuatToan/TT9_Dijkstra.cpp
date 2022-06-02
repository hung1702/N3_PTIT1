//TT9 Dijkstra: giai thuat tim duong di ngan nhat
#include<bits/stdc++.h>
using namespace std;

#define MAX 50
#define TRUE 1
#define FALSE  0
#define VOCUNG 100000000
//so đinh, dinh dau va dinh cuoi
int n, s, t;        
//mang danh dau duong di, mang dd khoang cach, dd dinh dc gan nhan
int truoc[MAX], d[MAX], chuaxet[MAX];
//ma tran trong so
int matrix[MAX][MAX];

//ham hien thi duong di
void HienThi(){
    cout<<"Duong di ngan nhat tu "<<(char)(s + 'A' - 1)<<" den "<<(char)(t + 'A' - 1)<<" la:"<<endl;
    cout<<(char)(t + 'A' - 1)<<" <= ";    //inra dinh cuoi thoe kieu char.
    int i = truoc[t];
    while(i != s){
        cout<<(char)(i + 'A' - 1)<<" <= ";    //inra ket qua theo kieu char.
        i = truoc[i];
    }
    cout<<(char)(s + 'A' - 1)<<endl;              //inra dinh dau thoe kieu char.
    cout<<"Do dai duong di la: "<< d[t]<< endl;
    cout<<endl;
}

//giai thuay dijkstra timm duong di ngan nhat
void Dijkstra() {
    int u, minp;
    //khoi tao nhan tam thoi cho cac dinh.
    for (int v = 1; v <= n; v++) {
        d[v] = matrix[s][v];
        truoc[v] = s;
        chuaxet[v] = FALSE;
    }
    truoc[s] = 0;
    d[s] = 0;
    chuaxet[s] = TRUE;
    while (!chuaxet[t]) {                   //lap mang
        minp = VOCUNG;
        for (int v = 1; v <= n; v++) {      //tim dinh u sao cho d[u] là nho nhat
            if ((!chuaxet[v]) && (minp > d[v])) {
                u = v;
                minp = d[v];
            }
        }
        chuaxet[u] = TRUE;                  //u la dinh co nhan tam thoi nho nhat
        if (!chuaxet[t]) {                  //gan nhan lai cho cac dinh.
            for (int v = 1; v <= n; v++) {
                if ((!chuaxet[v]) && (d[u] + matrix[u][v] < d[v])) {
                    d[v] = d[u] + matrix[u][v];
                    truoc[v] = u;
                }
            }
        }
    }
}

int main() {
    cout<<"Nhap so bo test t = ";
    int test;
    cin>>test;
    while(test--){
        cout<<"Nhap so dinh do thi: n = ";
        cin >> n;
        cout<< "Nhap dinh dau do thi: s = ";
        cin >> s;
        cout<< "Nhap dinh cuoi do thi t = ";
        cin >> t;
        cout<<"Nhap cac ptu ma tran cua do thi:"<<endl;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                cin >> matrix[i][j];
                if(matrix[i][j] == 0) 
                    matrix[i][j] = VOCUNG;
            }
        }

        Dijkstra();
        HienThi();
    }
    return 0;
}

/* INPUT
9
1 9
0 6 5 0 8 0 0 0 0
6 0 4 0 0 7 0 0 0
5 4 0 4 0 0 0 0 0
0 0 4 0 4 0 6 0 0
8 0 0 4 0 0 0 6 0
0 7 0 0 0 0 5 0 6
0 0 0 6 0 5 0 4 3
0 0 0 0 6 0 4 0 5
0 0 0 0 0 6 3 5 0

Define.
1 tuong ung voi dinh A
2 tuong ung voi dinh B
3 tuong ung voi dinh C
4 tuong ung voi dinh D
5 tuong ung voi dinh E
6 tuong ung voi dinh F
7 tuong ung voi dinh G
8 tuong ung voi dinh H
9 tuong ung voi dinh I
*/

//giả mã:

// void Dijkstra(Graph, source):
//     dist[source]  := 0                     // Khoảng cách từ nguồn đến nguồn được đặt thành 0
//     for each vertex v in Graph:            // vòng lặp để khởi tạo
//         if v ≠ source
//             dist[v]  := infinity           // Hàm khoảng cách từ nguồn đến mỗi nút, đặt thành vô cùng
//         add v to Q                         // Tất cả các nút ban đầu trong Q

//     while Q is not empty:                   // Khi ở vòng lặp chính
//         v = vertex in Q with min dist[v]    // Trong lần chạy đầu tiên, đỉnh này là nút nguồn
//         remove v from Q

//         for each neighbor u of v:           // Nơi người hàng xóm u vẫn chưa được xóa khỏi Q
//             dist[u] = min(dist[u], dist[v] + length(v, u)

//     return dist[]                           
// end function