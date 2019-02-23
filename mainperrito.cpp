//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): Pérez Tepox Luis Carlos *********************************//
//*************			Grupo:02  Práctica 03	REPORTE							******//
//*************			Visual Studio 2017								******//
//*****************************    INSTRUCCIONES    *******************************//
//******************   CON LAS TECLAS Y & U HACEMOS EL INCREMENTO Y DECREMENTO EN EL EJE X, RESPECTIVAMENTE******************************************//
//********************CON LAS TECLAS I & O HACEMOS EL INCREMENTO Y DECREMENTO EN EL EJE X, RESPECTIVAMENTE****************************************//
//****************** CON LAS VARIABLES PX Y PY ASIGNAMOS EL TAMAÑO DE PRSIMA QUE SE DEBE MODIFICAR SEGUN SE REQUIERA ANTES DE DAR INICIO AL PROGRAMA ******************************************//

//#include <gl/gl.h>     // The GL Header File
//#include <GL/glut.h>   // The GL Utility Toolkit (Glut) Header
//#include <stdlib.h>
//#include <sdio.h>
#include "Main.h"
float px=0.1;
float py=0.1;
float angleX = 0.0f;
float angleY = 0.0f;
float angleZ = 0.0f;
float transX = 0.0f;
float transY = 0.0f;
float transZ = -5.0f;


void InitGL ( GLvoid )     // Inicializamos parametros
{

	//glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glEnable(GL_LIGHTING);
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	//glEnable ( GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void prisma4(void)
{

	GLfloat vertice[8][3] = {
				{px ,-py, 0.5},    //Coordenadas Vértice 0 V0
				{-px ,-py, 0.5},    //Coordenadas Vértice 1 V1
				{-px ,-py, -0.5},    //Coordenadas Vértice 2 V2
				{px ,-py, -0.5},    //Coordenadas Vértice 3 V3
				{px ,py, 0.5},    //Coordenadas Vértice 4 V4
				{px ,py, -0.5},    //Coordenadas Vértice 5 V5
				{-px ,py, -0.5},    //Coordenadas Vértice 6 V6
				{-px ,py, 0.5},    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0, 0.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0, 0.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0, 0.0, 0.0);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(1.0, 0.0, 0.0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(1.0, 0.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(1.0, 0.0, 0.0);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}


void prisma3(void)
{

	GLfloat vertice[8][3] = {
				{px ,-py, 0.5},    //Coordenadas Vértice 0 V0
				{-px ,-py, 0.5},    //Coordenadas Vértice 1 V1
				{-px ,-py, -0.5},    //Coordenadas Vértice 2 V2
				{px ,-py, -0.5},    //Coordenadas Vértice 3 V3
				{px ,py, 0.5},    //Coordenadas Vértice 4 V4
				{px ,py, -0.5},    //Coordenadas Vértice 5 V5
				{-px ,py, -0.5},    //Coordenadas Vértice 6 V6
				{-px ,py, 0.5},    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prisma2(void)
{

	GLfloat vertice[8][3] = {
				{px ,-py, 0.5},    //Coordenadas Vértice 0 V0
				{-px ,-py, 0.5},    //Coordenadas Vértice 1 V1
				{-px ,-py, -0.5},    //Coordenadas Vértice 2 V2
				{px ,-py, -0.5},    //Coordenadas Vértice 3 V3
				{px ,py, 0.5},    //Coordenadas Vértice 4 V4
				{px ,py, -0.5},    //Coordenadas Vértice 5 V5
				{-px ,py, -0.5},    //Coordenadas Vértice 6 V6
				{-px ,py, 0.5},    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0, 1.0, 1.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0, 1.0, 1.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0, 1.0, 1.0);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(1.0, 1.0, 1.0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(1.0, 1.0, 1.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(1.0, 1.0, 1.0);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prisma(void)
{

	GLfloat vertice [8][3] = {
				{px ,-py, 0.5},    //Coordenadas Vértice 0 V0
				{-px ,-py, 0.5},    //Coordenadas Vértice 1 V1
				{-px ,-py, -0.5},    //Coordenadas Vértice 2 V2
				{px ,-py, -0.5},    //Coordenadas Vértice 3 V3
				{px ,py, 0.5},    //Coordenadas Vértice 4 V4
				{px ,py, -0.5},    //Coordenadas Vértice 5 V5
				{-px ,py, -0.5},    //Coordenadas Vértice 6 V6
				{-px ,py, 0.5},    //Coordenadas Vértice 7 V7
				};


		glBegin(GL_POLYGON);	//Front
			glColor3f(1.0,0.45,0.07);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
		glColor3f(1.0, 0.45, 0.07);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
		glColor3f(1.0, 0.45, 0.07);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
		glColor3f(1.0, 0.45, 0.07);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
	
		glColor3f(1.0, 0.45, 0.07);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[2]);
			glVertex3fv(vertice[3]);
		glEnd();

		glBegin(GL_POLYGON);  //Top
		glColor3f(1.0, 0.45, 0.07);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[7]);
		glEnd();
}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();


	//Poner Código Aquí.
	glTranslatef(0.0f, 0.0f, 0.0f);
	glTranslatef(transX, transY, transZ);
	glRotatef(45, angleX, angleY, angleZ);
	prisma();
	//OJO
	glPushMatrix();
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(px*2.0f, py*-6.0f, 0.0f);
	prisma2();
	glPopMatrix();

	///Patas
	glPushMatrix();
	glTranslatef(px*2.0f, py*-22.0f, 0.0f);
	prisma2();
	glPopMatrix();


	///Patas 2
	glPushMatrix();
	glTranslatef(px*12.0f, py*-28.0f, 0.0f);
	prisma2();

	glTranslatef(px*4.0f, py*0.0f, 0.0f);
	prisma2();

	glPopMatrix();




	/////

	glPushMatrix();

	glTranslatef(px*26.0f, py*2.0f, 0.0f);
	prisma4();
	glPopMatrix();

	//	PANZA
	glPushMatrix();
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(px*4.0f, py*-18.0f, 0.0f);
	prisma3();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma3();

	glTranslatef(px*-2.0f, py*-2.0f, 0.0f);
	prisma3();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma3();
	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma3();
	///////////
	glTranslatef(px*-2.0f, py*-2.0f, 0.0f);
	prisma3();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma3();
	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma3();

	
///////////////

	glTranslatef(px*-2.0f, py*-2.0f, 0.0f);
	prisma3();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma3();
	
	glPopMatrix();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, 0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, 0.0f, 0.0f);
	prisma();

	glPushMatrix();

	glTranslatef(px*20.0f, py*0.0f, 0.0f);
	prisma4();
	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma4();
	glPopMatrix();

	///
	
	glTranslatef(px*-8.0f, py*-2.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glPushMatrix();

	glTranslatef(px*18.0f, py*0.0f, 0.0f);
	prisma4();
	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma4();
	glPopMatrix();

	////////// 3ra seccion

	glTranslatef(px*-10.0f, py*-2.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glPushMatrix();

	glTranslatef(px*16.0f, py*0.0f, 0.0f);
	prisma4();
	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma4();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma4();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma4();
	glPopMatrix();
	////4ta sección

	glTranslatef(px*-12.0f, py*-2.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	
	glTranslatef(px*6.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glPushMatrix();

	glTranslatef(px*18.0f, py*0.0f, 0.0f);
	prisma3();
	
	glPopMatrix();

	glPushMatrix();

	glTranslatef(px*14.0f, py*0.0f, 0.0f);
	prisma4();
	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma4();

	glTranslatef(px*4.0f, py*0.0f, 0.0f);
	prisma4();


	glPopMatrix();


	//// 5ta sección


	glTranslatef(px*-16.0f, py*-2.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();


	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();


	glTranslatef(px*6.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glPushMatrix();

	glTranslatef(px*16.0f, py*0.0f, 0.0f);
	prisma3();
	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma3();


	glPopMatrix();

	glPushMatrix();

	glTranslatef(px*14.0f, py*0.0f, 0.0f);
	prisma4();
	glTranslatef(px*6.0f, py*0.0f, 0.0f);
	prisma4();


	glPopMatrix();


	//// 6ta sección


	glTranslatef(px*-16.0f, py*-2.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();


	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();


	glTranslatef(px*6.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();


	glPushMatrix();

	glTranslatef(px*14.0f, py*0.0f, 0.0f);
	prisma3();
	glPopMatrix();

	//// 7ma sección



	glTranslatef(px*-16.0f, py*-2.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();


	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();


	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glPushMatrix();

	glTranslatef(px*14.0f, py*0.0f, 0.0f);
	prisma();
	glPopMatrix();

	//// 8va sección



	glTranslatef(px*-12.0f, py*-2.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();


	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();


	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glPushMatrix();

	glTranslatef(px*10.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glPopMatrix();


	//9na sección


	glTranslatef(px*-8.0f, py*-2.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*4.0f, py*0.0f, 0.0f);
	prisma();


	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();


	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();
	glPushMatrix();

	glTranslatef(px*6.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glPopMatrix();


	/// 10ma sección

	glTranslatef(px*-6.0f, py*-2.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();


	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glPushMatrix();

	glTranslatef(px*6.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glPopMatrix();

	//11va LINEA

	glTranslatef(px*-2.0f, py*-2.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*4.0f, py*0.0f, 0.0f);
	prisma();

	//12va linea

	glTranslatef(px*-10.0f, py*-2.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();


	//13va linea

	glTranslatef(px*-6.0f, py*-2.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	glTranslatef(px*2.0f, py*0.0f, 0.0f);
	prisma();

	//14 & 15 linea

	glTranslatef(px*-2.0f, py*-2.0f, 0.0f);
	prisma();

	glTranslatef(px*0.0f, py*-2.0f, 0.0f);
	prisma();

	
    glutSwapBuffers ( );
    //glFlush();
    // Swap The Buffers
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
  if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);	

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Tipo de Vista
	//glOrtho(-5,5,-5,5,0.1,20);	
	glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 50.0);
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
	switch ( key ) {
		case 'w':
		case 'W':
			transZ +=0.2f;
			printf("Posicion en Z: %f\n", transZ);
			break;
		case 's':
		case 'S':
			transZ -=0.2f;
			printf("Posicion en Z: %f\n", transZ);
			break;
		case 'a':
		case 'A':
			transX -=0.2f;
			break;
		case 'd':
		case 'D':
			transX +=0.2f;
			break;
		case 'Q':
		case 'q':
			transY += 0.2f;
			printf("Posicion en Y: %f\n", transY);
			break;
		case 'E':
		case 'e':
			transY -= 0.2f;
			printf("Posicion en Y: %f\n", transY);
			break;

		case 'Y':
		case 'y':
			px +=0.01f;
			//printf("Posicion en Y: %f\n", transY);
			break;

		case 'i':
		case 'I':
			py += 0.01f;
			//printf("Posicion en Y: %f\n", transY);
			break;

		case 'u':
		case 'U':
			px -= 0.01f;
			//printf("Posicion en Y: %f\n", transY);
			break;

		case 'o':
		case 'O':
			py -= 0.01f;
			//printf("Posicion en Y: %f\n", transY);
			break;



		case 27:        // Cuando Esc es presionado...
			exit ( 0 );   // Salimos del programa
		break;        
		default:        // Cualquier otra
		break;
  }
	glutPostRedisplay();
}

void arrow_keys ( int a_keys, int x, int y )  // Funcion para manejo de teclas especiales (arrow keys)
{
  switch ( a_keys ) {
    case GLUT_KEY_UP:     // Presionamos tecla ARRIBA...
		angleX += 1.0f;
		break;
      //glutFullScreen ( ); // Full Screen Mode
      //break;
    case GLUT_KEY_DOWN:               // Presionamos tecla ABAJO...
		angleX -= 1.0f;
		break;
      //glutReshapeWindow ( 500, 500 ); // Cambiamos tamano de Ventana
      //break;
	case GLUT_KEY_LEFT:
		angleY += 1.0f;
		break;
	case GLUT_KEY_RIGHT:
		angleY -= 1.0f;
		break;
    default:
      break;
  }
  glutPostRedisplay();
}


int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  //glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitDisplayMode (GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
  glutInitWindowSize  (5000, 5000);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("CHARMANDER"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc    ( keyboard );	//Indicamos a Glut función de manejo de teclado
  glutSpecialFunc     ( arrow_keys );	//Otras
  glutMainLoop        ( );          // 

  return 0;
}



