#pragma once
#include <glut.h>
#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

const int maxSize = 20;                                                      //максимальное число вершин
extern int WinW;	                                                             //ширина окна (OpenGL)
extern int WinH;				                                     //высота окна (OpenGL)
struct vertCoord		                                                     //структура координат вершин
{
	int x, y;
};

class Graph
{
private:
	vector<int> vertList;			       //вектор вершин
	int adjMatrix[maxSize][maxSize];		       //матрица смежности
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
extern Graph graph;		                              //создается объект класса Graph
//
// Функции для решения задачи Коммивояжера
//
void Print_Matrix(int** matrix);		                                         //вывод текущей матрицы
bool Salesman_Check(int** matrix);                                               //проверка: можно ли решить задачу Коммивояжера
int** Change_Matrix();	                                                         //создается матрица, заменяя 0 на -1
int* Search_MinElem(int* line, int n);	                                         //поиск минимального элемента в строке матрицы
int** Reduct_Matrix(int** oldmatrix);		                                 //редукция матрицы
int** High_Zero(int** oldmatrix);
void Print_Result();                                                             //вывод результата решения задачи Коммивояжера
//
// Рисование кнопок (OpenGL)
//
void drawButton1();                                                              //кнопка "Make New Graph / Circular View"
void drawButton2();                                                              //кнопка "Salesman Task"
void drawButton3();                                                              //кнопка "Print Matrix In Console"
void drawButton4();                                                              //кнопка "Add Vertex"
void drawButton5();                                                              //кнопка "Delete Vertex"
void drawButton6();                                                              //кнопка "Add Edge"
void drawButton7();                                                              //кнопка "Delete Edge"

void drawRadius();                                                               //значение радиуса в окне OpenGL

//
// Рисование элементов графа (OpenGL)
//
void drawCircle(int x, int y, int R);                                            //рисование круга 
void drawBorderedCircle(int x, int y, int R);                                    //рисование круга, если курсор в зоне вершины
void drawText(int nom, int x1, int y1);                                          //рисование веса ребра
void drawLine(int text, int x0, int y0, int x1, int y1);                         //рисование ребра 
void drawVertex(int n);                                                          //рисование вершины 

void makeGraph();                                                                //создание графа
void setCoords(int i, int n);                                    //установка координат для вершин графа
//
// Функции - проверки
//
int Circle_Check(int x, int y);                                  //проверка: курсор в зоне вершины или нет
void Button_Check(int x, int y);                                 //проверка: курсор в зоне кнопки или нет
//
// Функции отслеживания поведения мыши
//
void mouseMove(int x, int y);                                    //отслеживание движения курсора мыши
void mouseClick(int button, int state, int x, int y);            //функция регистрации нажатий мыши
//
// Изображение
//
void reshape(int w, int h);                                      //отвечает за масштабирование
void display();                                                  //отвечает за изображение 
