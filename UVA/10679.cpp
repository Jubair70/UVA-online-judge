#include<bits/stdc++.h>
#define MX 1001
using namespace std;
struct NODE {
    int cnt;
    bool vis;
    NODE *next[70];
    vector <NODE *> out;
    NODE() {
        for(int i = 0; i < 70; i++) {
            next[i] = NULL;
        }
        out.clear();
        vis = false;
        cnt=0;
    }

    ~NODE() {
        for(int i = 1; i < 70; i++)
            if(next[i] != NULL && next[i] != this)
                delete next[i];
    }
}*root;
void buildtrie(char dictionary[][MX],int n) {    // processing the dictionarytionary

    root = new NODE();

    /*usual trie part*/
    for(int i = 0; i < n; i++) {
        NODE *p = root;
        for(int j = 0; dictionary[i][j] ; j++) {
            char c = dictionary[i][j]- 'A' + 1;
            if(!p->next[c])
                p->next[c] = new NODE();
            p = p->next[c];
        }
    }

    /* Pushing the nodes adjacent to root into queue */
    queue <NODE *> q;
    for(int i = 0; i < 70; i++) {
        if(!root->next[i])
            root->next[i] = root;
        else {
            q.push(root->next[i]);
            root->next[i]->next[0] = root;  // ->next[0] = back Pointer

        }
    }

    /* Building Aho-Corasick tree */
    while(!q.empty()) {
        NODE *u = q.front();    // parent node
        q.pop();

        for(int i = 1; i < 70; i++) {
            if(u->next[i]) {
                NODE *v = u->next[i];   // child node
                NODE *w = u->next[0];   // back pointer of parent node
                while( !w->next[i] )    // Until the char(i+'a'-1) child is found
                    w = w->next[0];     // go up and up to back pointer.

                v->next[0] = w = w->next[i];  // back pointer of v will be found child above.
                w->out.push_back(v);    // out will be used in dfs step.
                                        // here w is the new found match node.
                q.push(v);              // Push v into queue.
            }
        }
    }
}

void aho_corasick(NODE *p, char *word) {    // Third step, processing the text.
    for(int i = 0; word[i]; i++) {
        char c = word[i]-'A'+1 ;
        while(!p->next[c])
            p = p->next[0];
        p = p->next[c];
        p->cnt++;
    }
}

int dfs( NODE *p ) {    // DFS for counting.
    if(p->vis) return p->cnt;
    for(int i = 0; i < p->out.size(); i++)
        p->cnt += dfs(p->out[i]);
    p->vis = true;
    return p->cnt;
}
char query[100001],dictionary[MX][MX];
int main()
{
  //  freopen("in.txt","r",stdin);
    int n,q;
    scanf("%d",&n);
    getchar();
    while(n--)
    {

        gets(query);
        scanf("%d",&q);
        getchar();
        for(int i=0;i<q;i++)
        {
        gets(dictionary[i]);
        }
        buildtrie(dictionary, q);
        aho_corasick(root, query);
        for(int i = 0; i < q; i++) {
            NODE *p = root;
            for(int j = 0; dictionary[i][j]; j++) {
                char c = dictionary[i][j] -'A' +1;
                p = p->next[c];
            }
           if(dfs(p)!=0) putchar('y');
           else putchar('n');
           cout<<endl;
        }
        delete root;
    }
    return 0;
}
