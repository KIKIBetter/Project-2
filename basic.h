#define MaxSize 3950
#define INFINITY 65536
typedef struct node{
	unsigned int id;
	double lat;
	double lon;
	struct node* nextNode;
} Node;

typedef struct path{
	unsigned int id;
	unsigned int node1;
	unsigned int node2;
	double length;
	struct path* nextPath;
} Path;

typedef struct Graph{
	unsigned int vexnum;
	unsigned int edgnum;
	double matrix[MaxSize][MaxSize];
} Graph;
