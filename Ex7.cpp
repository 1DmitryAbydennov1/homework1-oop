#include <iostream>
#include <cmath>

struct Vector3f
{
	float x;
	float y;
	float z;
};

Vector3f operator + (Vector3f a, Vector3f b)
{
	Vector3f c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	c.z = a.z + b.z;
	return c;
}

Vector3f operator - (Vector3f a, Vector3f b)
{
	Vector3f c;
	c.x = a.x - b.x;
	c.y = a.y - b.y;
	c.z = a.z - b.z;
	return c;
}

Vector3f operator * (Vector3f a, float i)
{
	Vector3f c;
	c.x = a.x*i;
	c.y = a.y*i;
	c.z = a.z*i;
	return c;
}

Vector3f operator * (float i, Vector3f a)
{
	Vector3f c;
	c.x = a.x*i;
	c.y = a.y*i;
	c.z = a.z*i;
	return c;
}

bool operator == (Vector3f a, Vector3f b)
{
	if ((a.x == b.x) && (a.y == b.y) && (a.z == b.z))
		return 1;
	else
		return 0;
}

bool operator != (Vector3f a, Vector3f b)
{
	if ((a.x == b.x) && (a.y == b.y) && (a.z == b.z))
		return 0;
	else
		return 1;
}

void operator += (Vector3f& a, Vector3f b)
{
	a.x = a.x + b.x;
	a.y = a.y + b.y;
	a.z = a.z + b.z;
}

void operator -= (Vector3f& a, Vector3f b)
{
	a.x = a.x - b.x;
	a.y = a.y - b.y;
	a.z = a.z - b.z;
}

void operator *= (Vector3f& a, float i)
{
	a.x = a.x*i;
	a.y = a.y*i;
	a.z = a.z*i;
}

void operator /= (Vector3f& a, float i)
{
	a.x = a.x/i;
	a.y = a.y/i;
	a.z = a.z/i;
}

float operator * (Vector3f a, Vector3f b)
{
	int ans = 0;
	ans = a.x*b.x + a.y*b.y + a.z*b.z;
	return ans;
}

 float squaredNorm(const Vector3f& a)
 {
 	float sq;
 	sq = a.x*a.x + a.y*a.y + a.z*a.z;
 	return sq;
 }

 float norm(const Vector3f& a)
 {
 	float norma;
 	norma = sqrt(a.x*a.x + a.y*a.y + a.z*a.z);
 	return norma;
 }

 void normalize(Vector3f& a)
 {
 	float norma;
 	norma = sqrt(a.x*a.x + a.y*a.y + a.z*a.z);
 	a.x = a.x/norma;
 	a.y = a.y/norma;
 	a.z = a.z/norma;
 }
int main()
{
	Vector3f a = {5,2,3};
	Vector3f b = {1,2,3};
	normalize(a);
	std::cout << a.z;
}