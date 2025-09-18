/*
CSE2111 Data Structures.
Graph
In this program we have created graph using a 2-D array of size 5x5. 
We will use the term vertex and node interchangeably;
*/

#include <stdio.h>
#define MAX 5



int myGraph[MAX][MAX]; //Declaring a 5x5 grid for storing the graph


//----------------------------------------------------
//This function clears the  contents of the 2-D array
//----------------------------------------------------
void clear_graph()
{
	int i,j;
	for(i=0; i<MAX; i++)
	{
		for(j=0; j<MAX; j++)
		{
			myGraph[i][j]=-5; //Let's assume -5 means no path is available
		}
	}
}

//----------------------------------------------------
//This function fills the graph with cost of paths
//----------------------------------------------------
void fill_graph()
{
	myGraph[0][1]=12;
	myGraph[0][2]=5;
	myGraph[0][3]=30;
	
	myGraph[1][0]=12;
	myGraph[1][3]=8;
	myGraph[1][4]=5;
	
	myGraph[2][0]=5;
	myGraph[2][3]=11;
	
	myGraph[3][0]=15;
	myGraph[3][1]=8;
	myGraph[3][4]=7;
	
	myGraph[4][1]=5;
	myGraph[4][3]=7;
}


//----------------------------------------------------
//This function finds the maximum cost and display it
//----------------------------------------------------
void find_max_cost()
{

	int s,d;
	int src_node, dest_node;
	int max_cost = myGraph[0][0]; //setting the max cost to a minimum
	
	for(s=0; s<MAX; s++)
	{
		for(d=0; d<MAX; d++)
		{
			if(myGraph[s][d] >= max_cost)
			{
				max_cost = myGraph[s][d];
				src_node=s;
				dest_node=d; 
			}				
		}
	}
	
	printf("\nThe maximum cost is %d from node %d to node %d", max_cost, src_node, dest_node);
}

//----------------------------------------------------
//This function dislays the graph with path cost only
//----------------------------------------------------
void display_graph_simple()
{
	int r,c;
	printf("\nSIMPLE DISPLAY\n");

	for(r=0; r<MAX; r++)
	{
		for(c=0; c<MAX; c++)
		{
			printf("%d\t", myGraph[r][c]); ///t means tab to get equal spaces
		}
		printf("\n");
	}
}

//---------------------------------------------------------------
//This function dislays the graph with node number and path cost
//---------------------------------------------------------------
void display_graph_advanced()
{
	int i,j;

	printf("\nADVANCED DISPLAY\n");
			
	printf("\t");
	for(i=0; i<MAX; i++)
		printf("%d\t",i); //printing destination node number
	printf("\n");
		
	for(i=0; i<MAX; i++)
	{
		printf("%d\t",i); //printing source node number
		for(j=0; j<MAX; j++)
		{
			printf("%d\t", myGraph[i][j]); //printing path cost
		}
		printf("\n");
	}
}
//-----------------------------------------
// Main function
//-----------------------------------------

int main()
{
	clear_graph();
	fill_graph();
	display_graph_simple();
	display_graph_advanced();
	find_max_cost();
	
	return 0;
}

