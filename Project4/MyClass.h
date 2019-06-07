#include <math.h>

using namespace System;


using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

//”правление на клавиши "w" и "s" раскладка английска€
ref class Polk
{
private:
	Graphics ^q;
public:
	virtual double GetY() = 0;
};
ref class Leftt :public Polk
{
public:
	Graphics^ g;
	int	 xx;
	int yy;
public:
	Leftt()
	{
		xx = 0;
		yy = 250;
	}
	Leftt(Graphics^ q)
	{
		g = q;
	}
	void Up()
	{
		if (yy > 0) yy -= 10;
	}
	void Down()
	{
		if (yy<500)
			yy += 10;
	}
	void Draw()
	{
		Image^ img = Image::FromFile("pltfrm.png");
		g->DrawImage(img, xx, yy, 20, 100);
	}
	void Push(Graphics^ q)
	{
		g = q;
	}
	virtual double GetY() override
	{
		return Convert::ToDouble(yy);
	}
	double GetLX()
	{
		return Convert::ToDouble(xx);
	}
	Graphics^ GetG()
	{
		return g; 
	}

};
ref class Rightt : public Polk
	{
	protected:
		Graphics^ g;
		double xr;
		double yr;
	public:
		Rightt()
		{
			xr = 780;
			yr = 250;
		}
		Rightt(Graphics^ q)
		{
			g = q;
		}
		void Up()
		{
			if (yr>0)
				yr -= 5;
		}
		void Down()
		{
			if (yr<500)
				yr += 5;
		}
		void Draw()
		{
			Image^ img = Image::FromFile("pltfrm.png");
			g->DrawImage(img, xr, yr, 20, 100);
		}
		void Push(Graphics^ q)
		{
			g = q;
		}
		virtual double GetY() override
		{
			return Convert::ToDouble(yr);
		}
	}; 
	ref  class Ball 
	{
	private:
		Graphics^ g;
		double x;
		double y;
		double anglee;
		int sost;
		Polk^ w;
		int countl;
		int countr;
		double otbv;
	public:
		Ball()
		{
			x = 20;
			y = 300;
			anglee = 3.14159265358979323846/4;
			sost = 0;
		}
		void Push(Graphics^ q)
		{
			g = q;
		}
		void AddGraphics(Polk^ q)
		{
			w = q;
		}
		void Ddraw()
		{
			Brush^ brush = gcnew SolidBrush(Color::Gray);
			Font^ fn = gcnew System::Drawing::Font("Impact", 100.0F, FontStyle::Bold);
			Image^ img = Image::FromFile("ball.png");
			g->DrawString(Convert::ToString(countl), fn, brush, 250, 50);
			g->DrawString(Convert::ToString(countr), fn, brush, 470, 50);
			g->DrawImage(img, x, y, 30, 30);
			if (countl == 3)
			{
				sost = 0;
				g->DrawString("YOU WIN", fn, brush, 170, 250);
			}
			else
				if (countr == 3)
				{
					sost = 0;
					g->DrawString("YOU LOSE", fn, brush, 160, 250);
				}
			
		}
		void Draw()
		{
			Lg();
			if (sost == 1)
			{
				x = x - 10 * cos(anglee);
				y = y + 10 * sin(anglee);
			}
			else
			if (sost == 2)
			{
				x = x + 10 * cos(anglee);
				y = y + 10 * sin(anglee);
			}
			else
			if (sost == 3)
			{
				x = x + 10 * cos(anglee);
				y = y - 10 * sin(anglee);
			}
			else
			if (sost == 4)
			{
				x = x - 10 * cos(anglee);
				y = y - 10 * sin(anglee);
			}
			if (sost == 0)
			{
				x = 20;
				y = w->GetY() + 35;
			}
			Ddraw();
		}	
		void Lg()
		{
			if (y < 0 && sost == 4)
				sost = 1;
			else
			if (y < 0 && sost == 3)
				sost = 2;
			else
				if (x < 20)
				{
					lft();
				}
			else
				if (x > 750)
				{
					rft();
				}
			else
			if (y > 570 && sost == 2)
				sost = 3;
			else
			if (y > 570 && sost == 1)
				sost = 4;
			
		}
		void Start()
		{
			if (sost==0)
				sost = 4;
		}
		double getY()
		{
			return y;
		}
		double getX()
		{
			return x;
		}
		void lft()
		{
			otbv = y + 15 - w->GetY();
				if ((y + 15 - w->GetY()) > 0 && (y + 15 - w->GetY()) <= 12.5){
					anglee = 3.14159265358979323846 /3;
					sost = 3;
				}else
				if ((y + 15 - w->GetY()) > 12.5 && (y + 15 - w->GetY()) <= 25){
					anglee = 3.14159265358979323846 / 5;
					sost = 3;
				}else
				if ((y + 15 - w->GetY()) > 25 && (y + 15 - w->GetY() )<= 37.5){
					anglee = 3.14159265358979323846 / 7;
					sost = 3;
				}else
				if ((y + 15 - w->GetY()) > 37.5 &&( y + 15 - w->GetY()) <= 50){
					anglee = 3.14159265358979323846 /10;
					sost = 3;
				}else
				if ((y + 15 - w->GetY()) > 50 && (y + 15 - w->GetY()) <= 62.5){
					anglee = 3.14159265358979323846 /10;
					sost = 2;
				}else
				if ((y + 15 - w->GetY()) > 62.5 && (y + 15 - w->GetY()) <= 75){
					anglee = 3.14159265358979323846 / 7;
					sost = 2;
				}else
				if ((y + 15 - w->GetY()) > 75 &&( y + 15 - w->GetY()) <= 87.5){
					anglee = 3.14159265358979323846 / 5;
					sost = 2;
				}else
				if ((y + 15 - w->GetY()) > 87.5 &&( y + 15 - w->GetY()) <= 100){
					anglee = 3.14159265358979323846 / 3;
					sost = 2;
			}
			else
			{
				countr++;
				x = 20;
				y = w->GetY()+35;
				sost = 0;
				
			}
		}
		bool GetSost()
		{
			if (sost == 0)
			return true;
			else return false;
		}
		void rft()
		{
			otbv = y + 15 - w->GetY();
			
			if (otbv > 0 && otbv <= 12.5){
					anglee = 3.14159265358979323846 / 3;
					sost = 4;
				}else
					if (otbv > 12.5 && otbv <= 25){
					anglee = 3.14159265358979323846 / 5;
					sost = 4;
				}else
					if (otbv > 25 && otbv <= 37.5){
					anglee = 3.14159265358979323846 / 7;
					sost = 4;
				}else
					if (otbv > 37.5 && otbv <= 50){
					anglee = 3.14159265358979323846 /10;
					sost = 4;
				}else
					if (otbv > 50 && otbv <= 62.5){
					anglee = 3.14159265358979323846 /10;
					sost = 1;
				}else
					if (otbv > 62.5 && otbv <= 75){
					anglee = 3.14159265358979323846 / 7;
					sost = 1;
				}else
					if (otbv > 75 && otbv <= 87.5){
					anglee = 3.14159265358979323846 / 5;
					sost = 1;
				}else
					if (otbv > 87.5 && otbv <= 100){
						anglee = 3.14159265358979323846 / 3;
						sost = 1;
					
			}
			else
			{
				countl++;
				x = 770;
				y = w->GetY() + 35;
				sost = 0;
				Startr();
			}
		}
			void Startl(){
				x = 20;
				y = w->GetY() + 35;
				sost = 3;
			}
			void Startr(){
				x = 750;
				y = w->GetY() + 35;
				sost = 4;
			}
		
		
	};

