#pragma once

struct Matrix3D
{
	private:

		float n[3][3];

	public:

	Matrix3D() = default;

	Matrix3D(float n00, float n01, float n02,
			 float n10, float n11, float n12,
			 float n20, float n21, float n22)
	{
		n[0][0] = n00; n[0][1] = n10; n[0][2] = n20;
		n[1][0] = n01; n[1][1] = n11; n[1][2] = n12;
		n[2][0] = n02; n[2][1] = n12; n[2][2] = n22;
	}


};
