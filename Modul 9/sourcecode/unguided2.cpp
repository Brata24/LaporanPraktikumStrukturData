#include <iostream>
#include <queue> // Untuk implementasi level-order traversal
using namespace std;

// Deklarasi Tree
struct Tree
{
    char pandia_2311102076;
    Tree *left, *right, *parent;
};

Tree *root, *baru;

// Inisialisasi
void init()
{
    root = NULL;
}

// Cek Node
bool isEmpty()
{
    return root == NULL;
}

// Buat Node Baru
void buatNode(char pandia_2311102076)
{
    if (isEmpty())
    {
        root = new Tree();
        root->pandia_2311102076 = pandia_2311102076;
        root->left = NULL;
        root->right = NULL;
        root->parent = NULL;
        cout << "\nNode " << pandia_2311102076 << " berhasil dibuat menjadi root." << endl;
    }
    else
    {
        cout << "\nTree sudah dibuat" << endl;
    }
}
// Tambah Kiri
Tree *insertLeft(char pandia_2311102076, Tree *node)
{
    if (isEmpty() == 1)
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
        return NULL;
    }
    else
    {
        // cek apakah child kiri ada atau tidak
        if (node->left != NULL)
        {
            // kalau ada
            cout << "\n Node " << node->pandia_2311102076 << "sudah ada child kiri !" << endl;
            return NULL;
        }
        else
        {
            // kalau tidak ada
            baru = new Tree();
            baru->pandia_2311102076 = pandia_2311102076;
            baru->left = NULL;
            baru->right = NULL;
            baru->parent = node;
            node->left = baru;
            cout << "\n Node " << pandia_2311102076 << " berhasil ditambahkan ke child kiri " << baru->parent->pandia_2311102076
                 << endl;
            return baru;
        }
    }
}
// Tambah Kanan
Tree *insertRight(char pandia_2311102076, Tree
                                              *node)
{
    if (root == NULL)
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
        return NULL;
    }
    else
    {
        // cek apakah child kanan ada atau tidak
        if (node->right != NULL)
        {
            // kalau ada
            cout << "\n Node " << node->pandia_2311102076 << "sudah ada child kanan !" << endl;
            return NULL;
        }
        else
        {
            // kalau tidak ada
            baru = new Tree();
            baru->pandia_2311102076 = pandia_2311102076;
            baru->left = NULL;
            baru->right = NULL;
            baru->parent = node;
            node->right = baru;
            cout << "\n Node " << pandia_2311102076 << "berhasil ditambahkan ke child kanan " << baru->parent->pandia_2311102076
                 << endl;
            return baru;
        }
    }
}
// Ubah pandia_2311102076 Tree
void update(char pandia_2311102076, Tree *node)
{
    if (isEmpty() == 1)
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!node)
            cout << "\n Node yang ingin diganti tidak ada!!" << endl;
        else
        {
            char temp = node->pandia_2311102076;
            node->pandia_2311102076 = pandia_2311102076;
            cout << "\n Node " << temp << " berhasil diubah menjadi "
                 << pandia_2311102076 << endl;
        }
    }
}
// Lihat Isi pandia_2311102076Tree
void retrieve(Tree *node)
{
    if (!root)
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!node)
            cout << "\n Node yang ditunjuk tidak ada!" << endl;
        else
        {
            cout << "\n pandia_2311102076 node : " << node->pandia_2311102076 << endl;
        }
    }
}
// Cari pandia_2311102076 Tree
void find(Tree *node)
{
    if (!root)
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!node)
            cout << "\n Node yang ditunjuk tidak ada!" << endl;
        else
        {
            cout << "\n pandia_2311102076 Node : " << node->pandia_2311102076 << endl;
            cout << " Root : " << root->pandia_2311102076 << endl;
            if (!node->parent)
                cout << " Parent : (tidak punya parent)" << endl;
            else
                cout << " Parent : " << node->parent->pandia_2311102076
                     << endl;
            if (node->parent != NULL && node->parent->left != node && node->parent->right == node)
                cout << " Sibling : " << node->parent->left->pandia_2311102076 << endl;
            else if (node->parent != NULL && node->parent->right != node && node->parent->left == node)
                cout << " Sibling : " << node->parent->right->pandia_2311102076 << endl;
            else
                cout << " Sibling : (tidak punya sibling)" << endl;
            if (!node->left)
                cout << " Child Kiri : (tidak punya Child kiri)" << endl;
            else
                cout << " Child Kiri : " << node->left->pandia_2311102076 << endl;
            if (!node->right)
                cout << " Child Kanan : (tidak punya Child kanan)"
                     << endl;
            else
                cout << " Child Kanan : " << node->right->pandia_2311102076 << endl;
        }
    }
}
// Tampilkan Child Node
void showChildren(Tree *node)
{
    if (!node)
    {
        cout << "\nNode tidak ada!" << endl;
        return;
    }

    cout << "\nChild dari node " << node->pandia_2311102076 << ": ";
    if (node->left)
        cout << node->left->pandia_2311102076 << " ";
    if (node->right)
        cout << node->right->pandia_2311102076 << " ";
    cout << endl;
}

// Tampilkan Descendant Node (menggunakan level-order traversal)
void showDescendants(Tree *node)
{
    if (!node)
    {
        cout << "\nNode tidak ada!" << endl;
        return;
    }

    queue<Tree *> q;
    q.push(node);

    cout << "\nDescendant dari node " << node->pandia_2311102076 << ": ";
    while (!q.empty())
    {
        Tree *current = q.front();
        q.pop();

        if (current != node)
        { // Jangan tampilkan node awal (node yang dicari descendant-nya)
            cout << current->pandia_2311102076 << " ";
        }

        if (current->left)
            q.push(current->left);
        if (current->right)
            q.push(current->right);
    }
    cout << endl;
}
// preOrder
void preOrder(Tree *node)
{
    if (!root)
        cout << "\n Buat tree terlebih dahulu!" << endl;
    else
    {
        if (node != NULL)
        {
            cout << " " << node->pandia_2311102076 << ", ";
            preOrder(node->left);
            preOrder(node->right);
        }
    }
}
// inOrder
void inOrder(Tree *node)
{
    if (!root)
        cout << "\n Buat tree terlebih dahulu!" << endl;
    else
    {
        if (node != NULL)
        {
            inOrder(node->left);
            cout << " " << node->pandia_2311102076 << ", ";
            inOrder(node->right);
        }
    }
}
// postOrder
void postOrder(Tree *node)
{
    if (!root)
        cout << "\n Buat tree terlebih dahulu!" << endl;
    else
    {
        if (node != NULL)
        {
            postOrder(node->left);
            postOrder(node->right);
            cout << " " << node->pandia_2311102076 << ", ";
        }
    }
}
// Hapus Node Tree
void deleteTree(Tree *node)
{
    if (!root)
        cout << "\n Buat tree terlebih dahulu!" << endl;
    else
    {
        if (node != NULL)
        {
            if (node != root)
            {
                node->parent->left = NULL;
                node->parent->right = NULL;
            }
            deleteTree(node->left);
            deleteTree(node->right);
            if (node == root)
            {
                delete root;
                root = NULL;
            }
            else
            {
                delete node;
            }
        }
    }
}
// Hapus SubTree
void deleteSub(Tree *node)
{
    if (!root)
        cout << "\n Buat tree terlebih dahulu!" << endl;
    else
    {
        deleteTree(node->left);
        deleteTree(node->right);
        cout << "\n Node subtree " << node->pandia_2311102076 << " berhasil dihapus." << endl;
    }
}
// Hapus Tree
void clear()
{
    if (!root)
        cout << "\n Buat tree terlebih dahulu!" << endl;
    else
    {
        deleteTree(root);
        cout << "\n Tree berhasil dihapus." << endl;
    }
}
// Cek Size Tree
int size(Tree *node)
{
    if (!root)
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
        return 0;
    }
    else
    {
        if (!node)
        {
            return 0;
        }
        else
        {
            return 1 + size(node->left) + size(node->right);
        }
    }
}
// Cek Height Level Tree
int height(Tree *node)
{
    if (!root)
    {
        cout << "\n Buat tree terlebih dahulu!" << endl;
        return 0;
    }
    else
    {
        if (!node)
        {
            return 0;
        }
        else
        {
            int heightKiri = height(node->left);
            int heightKanan = height(node->right);
            if (heightKiri >= heightKanan)
            {
                return heightKiri + 1;
            }
            else
            {
                return heightKanan + 1;
            }
        }
    }
}
// Karakteristik Tree
void charateristic()
{
    cout << "\n Size Tree : " << size(root) << endl;
    cout << " Height Tree : " << height(root) << endl;
    cout << " Average Node of Tree : " << size(root) / height(root) << endl;
}

int main()
{
    init();
    char pandia_2311102076;
    cout << "Masukkan pandia_2311102076 untuk root: ";
    cin >> pandia_2311102076;
    buatNode(pandia_2311102076);
    Tree *nodeB, *nodeC, *nodeD, *nodeE, *nodeF,
        *nodeG, *nodeH, *nodeI, *nodeJ;
    cout << "Masukkan pandia_2311102076 untuk node B: ";
    cin >> pandia_2311102076;
    nodeB = insertLeft(pandia_2311102076, root);
    cout << "Masukkan pandia_2311102076 untuk node C: ";
    cin >> pandia_2311102076;
    nodeC = insertRight(pandia_2311102076, root);
    cout << "Masukkan pandia_2311102076 untuk node D: ";
    cin >> pandia_2311102076;
    nodeD = insertLeft(pandia_2311102076, nodeB);
    cout << "Masukkan pandia_2311102076 untuk node E: ";
    cin >> pandia_2311102076;
    nodeE = insertRight(pandia_2311102076, nodeB);
    cout << "Masukkan pandia_2311102076 untuk node F: ";
    cin >> pandia_2311102076;
    nodeF = insertLeft(pandia_2311102076, nodeC);
    cout << "Masukkan pandia_2311102076 untuk node G: ";
    cin >> pandia_2311102076;
    nodeG = insertLeft(pandia_2311102076, nodeE);
    cout << "Masukkan pandia_2311102076 untuk node H: ";
    cin >> pandia_2311102076;
    nodeH = insertRight(pandia_2311102076, nodeE);
    cout << "Masukkan pandia_2311102076 untuk node I: ";
    cin >> pandia_2311102076;
    nodeI = insertLeft(pandia_2311102076, nodeG);
    cout << "Masukkan pandia_2311102076 untuk node J: ";
    cin >> pandia_2311102076;
    nodeJ = insertRight(pandia_2311102076, nodeG);
    cout << "Traversal PreOrder: ";
    preOrder(root);
    cout << endl;
    cout << "Traversal InOrder: ";
    inOrder(root);
    cout << endl;
    cout << "Traversal PostOrder: ";
    postOrder(root);
    cout << endl;
    cout << "Karakteristik Tree:" << endl;
    charateristic();
    cout << endl;
    cout << "Update node C: ";
    update('Z', nodeC);
    update('C', nodeC);
    cout << endl;
    cout << "Cari node C ";
    find(nodeC);
    cout << endl;
    cout << "Hapus subtree G:" << endl;
    deleteSub(nodeG);
    cout << endl;
    cout << "Traversal InOrder setelah menghapus subtree :";
    inOrder(root);
    cout << endl;
    cout << "Hapus Tree" << endl;
    clear();
    return 0;
}
