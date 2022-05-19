#pragma once
#include <glut.h>
#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

const int maxSize = 20;                                                      //������������ ����� ������
extern int WinW;	                                                             //������ ���� (OpenGL)
extern int WinH;				                                     //������ ���� (OpenGL)
struct vertCoord		                                                     //��������� ��������� ������
{
	int x, y;
};

class Graph
{
private:
	vector<int> vertList;			       //������ ������
	int adjMatrix[maxSize][maxSize];		       //������� ���������
public:
	Graph();
	~Graph();
	bool IsEmpty();
	bool IsFull();

	int GetVertText(int i) { return vertList[i]; }
	vector<int> GetVertList() { return  vertList; }
	int GetAdjMatrixElem(int i, int j) { return adjMatrix[i][j]; }
	void SetEdgeZero(int i, int j) { adjMatrix[i][j] = 0; adjMatrix[j][i] = 0; }
	int GetAmountVerts() { return vertList.size(); }
	int GetVertPos(const int& vertex);
	int GetAmountEdges();
	void InsertVertex(const int& vertex);
	void InsertEdge(const int& vertex1, const int& vertex2, int weigth);
	void Print();
	void EraseLastVert();
	void EraseEdge(const int& vertex1, const int& vertex2);
	void DrawGraph();
};
extern Graph graph;		                              //��������� ������ ������ Graph
//
// ������� ��� ������� ������ ������������
//
void Print_Matrix(int** matrix);		                                         //����� ������� �������
bool Salesman_Check(int** matrix);                                               //��������: ����� �� ������ ������ ������������
int** Change_Matrix();	                                                         //��������� �������, ������� 0 �� -1
int* Search_MinElem(int* line, int n);	                                         //����� ������������ �������� � ������ �������
int** Reduct_Matrix(int** oldmatrix);		                                 //�������� �������
int** High_Zero(int** oldmatrix);
void Print_Result();                                                             //����� ���������� ������� ������ ������������
//
// ��������� ������ (OpenGL)
//
void drawButton1();                                                              //������ "Make New Graph / Circular View"
void drawButton2();                                                              //������ "Salesman Task"
void drawButton3();                                                              //������ "Print Matrix In Console"
void drawButton4();                                                              //������ "Add Vertex"
void drawButton5();                                                              //������ "Delete Vertex"
void drawButton6();                                                              //������ "Add Edge"
void drawButton7();                                                              //������ "Delete Edge"

void drawRadius();                                                               //�������� ������� � ���� OpenGL

//
// ��������� ��������� ����� (OpenGL)
//
void drawCircle(int x, int y, int R);                                            //��������� ����� 
void drawBorderedCircle(int x, int y, int R);                                    //��������� �����, ���� ������ � ���� �������
void drawText(int nom, int x1, int y1);                                          //��������� ���� �����
void drawLine(int text, int x0, int y0, int x1, int y1);                         //��������� ����� 
void drawVertex(int n);                                                          //��������� ������� 

void makeGraph();                                                                //�������� �����
void setCoords(int i, int n);                                    //��������� ��������� ��� ������ �����
//
// ������� - ��������
//
int Circle_Check(int x, int y);                                  //��������: ������ � ���� ������� ��� ���
void Button_Check(int x, int y);                                 //��������: ������ � ���� ������ ��� ���
//
// ������� ������������ ��������� ����
//
void mouseMove(int x, int y);                                    //������������ �������� ������� ����
void mouseClick(int button, int state, int x, int y);            //������� ����������� ������� ����
//
// �����������
//
void reshape(int w, int h);                                      //�������� �� ���������������
void display();                                                  //�������� �� ����������� 
