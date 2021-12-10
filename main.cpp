#include <GL/glew.h>
#include <GL/glut.h>
#include <stdio.h>
#include<string.h>
#include<iostream>
#include "shader.hpp"

int t=1,tt=2;


float points[] = { 

		 0.9, 0, -1,
		 0.8,  0.1, -1,
		  0.8, -0.1, -1,

		0.675, 0, -1,
		 0.8,  0.1, -1,
		 0.8, -0.1, -1,

	    0.9, 0, -1,
		 0.95,  0.05, -1,
		 0.95, -0.05, -1,
};


float points2[]={

	     -0.9, 0.3, 0.0,
		 -0.8,  0.4, 0.0,
		  -0.8, 0.2, 0.0,

		-0.675, 0.3, 0.0,
		 -0.8,  0.4, 0.0,
		 -0.8, 0.2, 0.0,

	    -0.9, 0.3, 0.0,
		 -0.95,  0.35, 0.0,
		 -0.95, 0.25, 0.0,
};


float points3[]={

	     0.9, -0.7, 0.0,
		 0.8,  -0.6, 0.0,
		  0.8, -0.8, 0.0,

		0.675, -0.7, 0.0,
		 0.8,  -0.6, 0.0,
		 0.8, -0.8, 0.0,

	    0.9, -0.7, 0.0,
		 0.95,  -0.65, 0.0,
		 0.95, -0.75, 0.0
};


float points4[]={

		0.8, 0.85, 0.0,
		 0.7,  0.95, 0.0,
		  0.7, 0.75, 0.0,

		0.575, 0.85, 0.0,
		 0.7,  0.95, 0.0,
		 0.7, 0.75, 0.0,

	    0.8, 0.85, 0.0,
		 0.85,  0.9, 0.0,
		 0.85, 0.8, 0.0,
};


float points5[]={

	     -0.9, -0.3, 0.0,
		 -0.8,  -0.2, 0.0,
		  -0.8, -0.4, 0.0,

		-0.675, -0.3, 0.0,
		 -0.8,  -0.2, 0.0,
		 -0.8, -0.4, 0.0,

	    -0.9, -0.3, 0.0,
		 -0.95,  -0.25, 0.0,
		 -0.95, -0.35, 0.0,
};


float points6[]={

		0.8, 0.55, 0.0,
		 0.7,  0.65, 0.0,
		  0.7, 0.45, 0.0,

		0.575, 0.55, 0.0,
		 0.7,  0.65, 0.0,
		 0.7, 0.45, 0.0,

	    0.8, 0.55, 0.0,
		 0.85,  0.6, 0.0,
		 0.85, 0.5, 0.0,
};


float temp[162]=
{
		0.9, 0, 1.0,
		 0.8,  0.1, 0.0,
		  0.8, -0.1, 0.0,

		0.675, 0, 1.0,
		 0.8,  0.1, 0.0,
		 0.8, -0.1, 0.0,

	    0.9, 0, 1.0,
		 0.95,  0.05, 1.0,
		 0.95, -0.05, 1.0,
		 //
		  -0.9, 0.3, 0.0,
		 -0.8,  0.4, 0.0,
		  -0.8, 0.2, 0.0,

		-0.675, 0.3, 0.0,
		 -0.8,  0.4, 0.0,
		 -0.8, 0.2, 0.0,

	    -0.9, 0.3, 0.0,
		 -0.95,  0.35, 0.0,
		 -0.95, 0.25, 0.0,
		 //

	     0.9, -0.7, 0.0,
		 0.8,  -0.6, 0.0,
		  0.8, -0.8, 0.0,

		0.675, -0.7, 0.0,
		 0.8,  -0.6, 0.0,
		 0.8, -0.8, 0.0,

	    0.9, -0.7, 0.0,
		 0.95,  -0.65, 0.0,
		 0.95, -0.75, 0.0,
		 //

		 0.8, 0.85, 0.0,
		 0.7,  0.95, 0.0,
		  0.7, 0.75, 0.0,

		0.575, 0.85, 0.0,
		 0.7,  0.95, 0.0,
		 0.7, 0.75, 0.0,

	    0.8, 0.85, 0.0,
		 0.85,  0.9, 0.0,
		 0.85, 0.8, 0.0,
		 //
		-0.9, -0.3, 0.0,
		 -0.8,  -0.2, 0.0,
		  -0.8, -0.4, 0.0,

		-0.675, -0.3, 0.0,
		 -0.8,  -0.2, 0.0,
		 -0.8, -0.4, 0.0,

	    -0.9, -0.3, 0.0,
		 -0.95,  -0.25, 0.0,
		 -0.95, -0.35, 0.0,
		 //

		 0.8, 0.55, 0.0,
		 0.7,  0.65, 0.0,
		  0.7, 0.45, 0.0,

		0.575, 0.55, 0.0,
		 0.7,  0.65, 0.0,
		 0.7, 0.45, 0.0,

	    0.8, 0.55, 0.0,
		 0.85,  0.6, 0.0,
		 0.85, 0.5, 0.0,

};


float plant[] = {

	0.0 ,-1,0.0,
   -0.05, -0.9, 0.0,
    0.05, -0.9, 0.0
  
};


float plant1[]={

	0.0 ,-1,0.0,
   -0.05, -0.9, 0.0,
    0.05, -0.9, 0.0
   
};


void transe(float *po,double se)
{
	for(int i=0; i<=24 ;i +=3 )po[i] +=se;
}


float po[27];
void poinit(float *o)
{
	for(int i=0; i<27 ;i++)po[i]=o[i];
}


void redo(void)
{
	
	if(points[24] <= (-0.95))
	{    int i=0;
	    
		for(int j=0; i<=24 && j<=24 ;i +=3,j +=3)points[j]=temp[i];
		for(int j=0, i=27; i<=51 && j<=24;i +=3 ,j +=3)points2[j] =temp[i];
		for(int j=0,i=54; i<=78 && j<=24;i +=3 ,j +=3)points3[j] =temp[i];
		for(int j=0,i=81; i<=105 && j<=24 ;i +=3 ,j +=3)points4[j] =temp[i];
		for(int j=0,i=108; i<=132 && j<=24 ;i +=3 ,j +=3)points5[j] =temp[i];
		for(int j=0,i=135; i<=159 && j<=24;i +=3 ,j +=3)points6[j] =temp[i];
	}

}


void init(void)
{
	
	GLuint programID = LoadShaders( "svs.vertexshader", "sfs.fragmentshader" );
	
	GLuint buffer;
	glGenBuffers(1, &buffer);
	glBindBuffer(GL_ARRAY_BUFFER, buffer);
	glBufferData(GL_ARRAY_BUFFER, sizeof(po), po , GL_DYNAMIC_DRAW);
	
	glUseProgram(programID);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(
			0,                  // attribute 0. No particular reason for 0, but must match the layout in the shader.
			3,                  // size
			GL_FLOAT,           // type
			GL_FALSE,           // normalized?
			0,                  // stride
			(void*)0           // array buffer offset
		);

		
}


void init2(void)
{
	
	GLuint programID = LoadShaders( "svs.vertexshader", "sfs2.fragmentshader" );
	
	GLuint buffer;
	glGenBuffers(1, &buffer);
	glBindBuffer(GL_ARRAY_BUFFER, buffer);
	glBufferData(GL_ARRAY_BUFFER, sizeof(po), po , GL_DYNAMIC_DRAW);
	
	glUseProgram(programID);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(
			0,                  // attribute 0. No particular reason for 0, but must match the layout in the shader.
			3,                  // size
			GL_FLOAT,           // type
			GL_FALSE,           // normalized?
			0,                  // stride
			(void*)0           // array buffer offset
		);

		
	}

void init3(void)
{
	
	GLuint programID = LoadShaders( "svs.vertexshader", "sfs3.fragmentshader" );
	
	GLuint buffer;
	glGenBuffers(1, &buffer);
	glBindBuffer(GL_ARRAY_BUFFER, buffer);
	glBufferData(GL_ARRAY_BUFFER, sizeof(plant), plant , GL_DYNAMIC_DRAW);
	
	glUseProgram(programID);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(
			0,                  // attribute 0. No particular reason for 0, but must match the layout in the shader.
			3,                  // size
			GL_FLOAT,           // type
			GL_FALSE,           // normalized?
			0,                  // stride
			(void*)0           // array buffer offset
		);

		
	}



void dr(double s)
{
plant[3]=plant1[3]+s;
plant[6]=plant1[6]+s;
plant[0]=plant1[0]+s;
init3();
glDrawArrays(GL_TRIANGLES, 0, 3); // Starting from vertex 0; 3 vertices total -> 1 triangle
glDisableVertexAttribArray(0);

}

void fish(float *p,int u)
{    
	poinit(p);
	if(u==1){init( );} else {init2();}
	glDrawArrays(GL_POLYGON, 0, 9);	
	glDisableVertexAttribArray(0);
}

void drawPlanet(void)
{
	dr(-0.13);
	dr(-0.26);
	dr(-0.39);
	dr(-0.52);
	dr(-0.65);
	dr(-0.78);
	dr(-0.91);
	dr(0);
	dr(0.13);
	dr(0.26);
	dr(0.39);
	dr(0.52);
	dr(0.65);
	dr(0.78);
	dr(0.91);
}


double se[6]={(-0.15),(+0.15),(-0.15),(-0.15),(+0.15),(-0.15)};
void idle(void)
{	
	transe(points,se[0]);
	transe(points2,se[1]);
	transe(points3,se[2]);
	transe(points4,se[3]);
	transe(points5,se[4]);
	transe(points6,se[5]);
	if(points[24] <= (-0.95)){redo(); int r=t; t=tt; tt=r; }
}

void display (void) 
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0);

	glPushMatrix();
	fish(points,t);
	fish(points2,tt);
	fish(points3,t);
	fish(points4,t);
	fish(points5,tt);
	fish(points6,tt);
	glPopMatrix(); 

	glPushMatrix();
	drawPlanet();
	glPopMatrix();

	glutPostRedisplay();
	//glFlush();
	glutSwapBuffers();
}


void initI(void)
	{
	glClearColor(0.4,1.0,1.0,0.0);
	glColor3f(1.0,1.0,0.0);
	}


int main(int argc, char **argv)
{

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB|GLUT_DEPTH);
glutInitWindowSize(500, 500);
glutInitWindowPosition(0, 0);
glutCreateWindow("fish");
glewExperimental=GL_TRUE;
glewInit();

initI();
glutDisplayFunc(display);
glutIdleFunc(idle);

glutPostRedisplay();
//glFlush();
glutSwapBuffers();

glutMainLoop();
return 0;

}