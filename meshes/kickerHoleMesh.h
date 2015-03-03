const unsigned int kickerHoleNumVertices=100;
const unsigned int kickerHoleNumFaces=288;
Vertex3D_NoTex2 kickerHole[100]=
{
{ -0.020262f,-0.903694f,-0.120182f, -0.000000f,0.496400f,0.868100f, 0.208334f,0.169846f},
{ 0.274790f,-1.074705f,-0.000182f, -0.128500f,0.479500f,0.868100f, 0.166667f,0.000000f},
{ 0.220478f,-0.872000f,-0.120182f, -0.128500f,0.479500f,0.868100f, 0.166667f,0.169846f},
{ -0.020264f,-1.113550f,-0.000181f, -0.000000f,0.496400f,0.868100f, 0.208334f,0.000000f},
{ 0.549736f,-0.960819f,-0.000182f, -0.248200f,0.429900f,0.868100f, 0.125001f,0.000000f},
{ 0.444812f,-0.779078f,-0.120182f, -0.248200f,0.429900f,0.868100f, 0.125000f,0.169846f},
{ 0.785838f,-0.779652f,-0.000182f, -0.351000f,0.351000f,0.868100f, 0.083334f,0.000000f},
{ 0.637452f,-0.631260f,-0.120182f, -0.351000f,0.351000f,0.868100f, 0.083333f,0.169846f},
{ 0.967005f,-0.543550f,-0.000183f, -0.429900f,0.248200f,0.868100f, 0.041668f,0.000000f},
{ 0.785270f,-0.438619f,-0.120183f, -0.429900f,0.248200f,0.868100f, 0.041667f,0.169846f},
{ 1.080892f,-0.268604f,-0.000183f, -0.479500f,0.128500f,0.868100f, 0.000000f,0.000000f},
{ 0.878192f,-0.214285f,-0.120183f, -0.479500f,0.128500f,0.868100f, 0.000000f,0.169846f},
{ 0.878192f,-0.214285f,-0.120183f, -0.479500f,0.128500f,0.868100f, 0.999999f,0.169846f},
{ 1.080892f,-0.268604f,-0.000183f, -0.479500f,0.128500f,0.868100f, 0.999999f,0.000000f},
{ 1.119736f,0.026450f,-0.000184f, -0.496400f,0.000000f,0.868100f, 0.958333f,0.000000f},
{ 0.909886f,0.026455f,-0.120184f, -0.496400f,0.000000f,0.868100f, 0.958333f,0.169846f},
{ 1.080892f,0.321504f,-0.000184f, -0.479500f,-0.128500f,0.868100f, 0.916667f,0.000000f},
{ 0.878192f,0.267195f,-0.120184f, -0.479500f,-0.128500f,0.868100f, 0.916666f,0.169846f},
{ 0.967005f,0.596450f,-0.000185f, -0.429900f,-0.248200f,0.868100f, 0.875000f,0.000000f},
{ 0.785270f,0.491529f,-0.120185f, -0.429900f,-0.248200f,0.868100f, 0.875000f,0.169846f},
{ 0.785838f,0.832552f,-0.000185f, -0.351000f,-0.351000f,0.868100f, 0.833333f,0.000000f},
{ 0.637452f,0.684169f,-0.120185f, -0.351000f,-0.351000f,0.868100f, 0.833333f,0.169846f},
{ 0.549736f,1.013719f,-0.000186f, -0.248200f,-0.429900f,0.868100f, 0.791667f,0.000000f},
{ 0.444812f,0.831987f,-0.120185f, -0.248200f,-0.429900f,0.868100f, 0.791667f,0.169846f},
{ 0.274790f,1.127606f,-0.000186f, -0.128500f,-0.479500f,0.868100f, 0.750000f,0.000000f},
{ 0.220478f,0.924909f,-0.120185f, -0.128500f,-0.479500f,0.868100f, 0.750000f,0.169846f},
{ -0.020264f,1.166450f,-0.000186f, 0.000000f,-0.496400f,0.868100f, 0.708334f,0.000000f},
{ -0.020262f,0.956603f,-0.120185f, 0.000000f,-0.496400f,0.868100f, 0.708334f,0.169846f},
{ -0.315317f,1.127606f,-0.000186f, 0.128500f,-0.479500f,0.868100f, 0.666667f,0.000000f},
{ -0.261002f,0.924909f,-0.120185f, 0.128500f,-0.479500f,0.868100f, 0.666667f,0.169846f},
{ -0.590264f,1.013719f,-0.000186f, 0.248200f,-0.429900f,0.868100f, 0.625000f,0.000000f},
{ -0.485337f,0.831987f,-0.120185f, 0.248200f,-0.429900f,0.868100f, 0.625001f,0.169846f},
{ -0.826365f,0.832552f,-0.000185f, 0.351000f,-0.351000f,0.868100f, 0.583334f,0.000000f},
{ -0.677977f,0.684169f,-0.120185f, 0.351000f,-0.351000f,0.868100f, 0.583334f,0.169846f},
{ -1.007533f,0.596450f,-0.000185f, 0.429900f,-0.248200f,0.868100f, 0.541667f,0.000000f},
{ -0.825795f,0.491529f,-0.120185f, 0.429900f,-0.248200f,0.868100f, 0.541668f,0.169846f},
{ -1.121419f,0.321504f,-0.000184f, 0.479500f,-0.128500f,0.868100f, 0.500000f,0.000000f},
{ -0.918717f,0.267195f,-0.120184f, 0.479500f,-0.128500f,0.868100f, 0.500001f,0.169846f},
{ -1.160264f,0.026450f,-0.000184f, 0.496400f,0.000000f,0.868100f, 0.458334f,0.000000f},
{ -0.950411f,0.026455f,-0.120184f, 0.496400f,0.000000f,0.868100f, 0.458335f,0.169846f},
{ -1.121419f,-0.268604f,-0.000183f, 0.479500f,0.128500f,0.868100f, 0.416667f,0.000000f},
{ -0.918717f,-0.214285f,-0.120183f, 0.479500f,0.128500f,0.868100f, 0.416668f,0.169846f},
{ -1.007533f,-0.543550f,-0.000183f, 0.429900f,0.248200f,0.868100f, 0.375001f,0.000000f},
{ -0.825795f,-0.438619f,-0.120183f, 0.429900f,0.248200f,0.868100f, 0.375001f,0.169846f},
{ -0.826365f,-0.779652f,-0.000182f, 0.351000f,0.351000f,0.868100f, 0.333334f,0.000000f},
{ -0.677977f,-0.631260f,-0.120182f, 0.351000f,0.351000f,0.868100f, 0.333334f,0.169846f},
{ -0.590264f,-0.960819f,-0.000182f, 0.248200f,0.429900f,0.868100f, 0.291667f,0.000000f},
{ -0.485337f,-0.779078f,-0.120182f, 0.248200f,0.429900f,0.868100f, 0.291667f,0.169846f},
{ -0.315317f,-1.074705f,-0.000182f, 0.128500f,0.479500f,0.868100f, 0.250001f,0.000000f},
{ -0.261002f,-0.872000f,-0.120182f, 0.128500f,0.479500f,0.868100f, 0.250001f,0.169846f},
{ -0.020262f,-0.903696f,-1.380182f, 0.000000f,1.000000f,-0.000000f, 0.208334f,0.992938f},
{ -0.020262f,-0.903694f,-0.120182f, 0.000000f,1.000000f,-0.000000f, 0.208334f,0.169846f},
{ 0.220478f,-0.872000f,-0.120182f, -0.258800f,0.965900f,-0.000000f, 0.166667f,0.169846f},
{ 0.220478f,-0.872002f,-1.380182f, -0.258800f,0.965900f,-0.000000f, 0.166667f,0.992938f},
{ 0.444812f,-0.779078f,-0.120182f, -0.500000f,0.866000f,-0.000000f, 0.125000f,0.169846f},
{ 0.444812f,-0.779080f,-1.380182f, -0.500000f,0.866000f,-0.000000f, 0.125000f,0.992938f},
{ 0.637452f,-0.631260f,-0.120182f, -0.707100f,0.707100f,-0.000000f, 0.083333f,0.169846f},
{ 0.637452f,-0.631262f,-1.380182f, -0.707100f,0.707100f,-0.000000f, 0.083333f,0.992938f},
{ 0.785270f,-0.438619f,-0.120183f, -0.866000f,0.500000f,-0.000000f, 0.041667f,0.169846f},
{ 0.785270f,-0.438622f,-1.380183f, -0.866000f,0.500000f,-0.000000f, 0.041667f,0.992938f},
{ 0.878192f,-0.214285f,-0.120183f, -0.965900f,0.258800f,-0.000000f, 0.000000f,0.169846f},
{ 0.878192f,-0.214288f,-1.380183f, -0.965900f,0.258800f,-0.000000f, 0.000000f,0.992938f},
{ 0.878192f,-0.214288f,-1.380183f, -0.965900f,0.258800f,-0.000000f, 1.000062f,0.992938f},
{ 0.909886f,0.026455f,-0.120184f, -1.000000f,-0.000000f,0.000000f, 0.958333f,0.169846f},
{ 0.909886f,0.026452f,-1.380184f, -1.000000f,-0.000000f,0.000000f, 0.958333f,0.992938f},
{ 0.878192f,-0.214285f,-0.120183f, -0.965900f,0.258800f,-0.000000f, 0.999999f,0.169846f},
{ 0.878192f,0.267195f,-0.120184f, -0.965900f,-0.258800f,0.000000f, 0.916666f,0.169846f},
{ 0.878192f,0.267193f,-1.380184f, -0.965900f,-0.258800f,0.000000f, 0.916666f,0.992938f},
{ 0.785270f,0.491529f,-0.120185f, -0.866000f,-0.500000f,0.000000f, 0.875000f,0.169846f},
{ 0.785270f,0.491527f,-1.380185f, -0.866000f,-0.500000f,0.000000f, 0.875000f,0.992938f},
{ 0.637452f,0.684169f,-0.120185f, -0.707100f,-0.707100f,0.000000f, 0.833333f,0.169846f},
{ 0.637452f,0.684167f,-1.380185f, -0.707100f,-0.707100f,0.000000f, 0.833333f,0.992938f},
{ 0.444812f,0.831987f,-0.120185f, -0.500000f,-0.866000f,0.000000f, 0.791667f,0.169846f},
{ 0.444812f,0.831985f,-1.380185f, -0.500000f,-0.866000f,0.000000f, 0.791667f,0.992938f},
{ 0.220478f,0.924909f,-0.120185f, -0.258800f,-0.965900f,0.000000f, 0.750000f,0.169846f},
{ 0.220478f,0.924907f,-1.380185f, -0.258800f,-0.965900f,0.000000f, 0.750000f,0.992938f},
{ -0.020262f,0.956603f,-0.120185f, 0.000000f,-1.000000f,0.000000f, 0.708334f,0.169846f},
{ -0.020262f,0.956601f,-1.380185f, 0.000000f,-1.000000f,0.000000f, 0.708334f,0.992938f},
{ -0.261002f,0.924909f,-0.120185f, 0.258800f,-0.965900f,0.000000f, 0.666667f,0.169846f},
{ -0.261002f,0.924907f,-1.380185f, 0.258800f,-0.965900f,0.000000f, 0.666667f,0.992938f},
{ -0.485337f,0.831987f,-0.120185f, 0.500000f,-0.866000f,0.000000f, 0.625001f,0.169846f},
{ -0.485337f,0.831985f,-1.380185f, 0.500000f,-0.866000f,0.000000f, 0.625001f,0.992938f},
{ -0.677977f,0.684169f,-0.120185f, 0.707100f,-0.707100f,0.000000f, 0.583334f,0.169846f},
{ -0.677977f,0.684167f,-1.380185f, 0.707100f,-0.707100f,0.000000f, 0.583334f,0.992938f},
{ -0.825795f,0.491529f,-0.120185f, 0.866000f,-0.500000f,0.000000f, 0.541668f,0.169846f},
{ -0.825795f,0.491527f,-1.380185f, 0.866000f,-0.500000f,0.000000f, 0.541668f,0.992938f},
{ -0.918717f,0.267195f,-0.120184f, 0.965900f,-0.258800f,0.000000f, 0.500001f,0.169846f},
{ -0.918717f,0.267193f,-1.380184f, 0.965900f,-0.258800f,0.000000f, 0.500001f,0.992938f},
{ -0.950411f,0.026455f,-0.120184f, 1.000000f,-0.000000f,-0.000000f, 0.458335f,0.169846f},
{ -0.950411f,0.026452f,-1.380184f, 1.000000f,-0.000000f,-0.000000f, 0.458335f,0.992938f},
{ -0.918717f,-0.214285f,-0.120183f, 0.965900f,0.258800f,-0.000000f, 0.416668f,0.169846f},
{ -0.918717f,-0.214288f,-1.380183f, 0.965900f,0.258800f,-0.000000f, 0.416668f,0.992938f},
{ -0.825795f,-0.438619f,-0.120183f, 0.866000f,0.500000f,-0.000000f, 0.375001f,0.169846f},
{ -0.825795f,-0.438622f,-1.380183f, 0.866000f,0.500000f,-0.000000f, 0.375001f,0.992938f},
{ -0.677977f,-0.631260f,-0.120182f, 0.707100f,0.707100f,-0.000000f, 0.333334f,0.169846f},
{ -0.677977f,-0.631262f,-1.380182f, 0.707100f,0.707100f,-0.000000f, 0.333334f,0.992938f},
{ -0.485337f,-0.779078f,-0.120182f, 0.500000f,0.866000f,-0.000000f, 0.291667f,0.169846f},
{ -0.485337f,-0.779080f,-1.380182f, 0.500000f,0.866000f,-0.000000f, 0.291667f,0.992938f},
{ -0.261002f,-0.872000f,-0.120182f, 0.258800f,0.965900f,-0.000000f, 0.250001f,0.169846f},
{ -0.261002f,-0.872002f,-1.380182f, 0.258800f,0.965900f,-0.000000f, 0.250001f,0.992938f}
};

WORD kickerHoleIndices[288]=
{
9, 10, 11,
8, 10, 9,
7, 8, 9,
7, 6, 8,
5, 6, 7,
4, 6, 5,
2, 4, 5,
2, 1, 4,
0, 1, 2,
3, 1, 0,
49, 3, 0,
49, 48, 3,
47, 48, 49,
46, 48, 47,
45, 46, 47,
45, 44, 46,
43, 44, 45,
42, 44, 43,
41, 42, 43,
41, 40, 42,
39, 40, 41,
38, 40, 39,
37, 38, 39,
37, 36, 38,
35, 36, 37,
34, 36, 35,
33, 34, 35,
33, 32, 34,
31, 32, 33,
30, 32, 31,
29, 30, 31,
29, 28, 30,
27, 28, 29,
26, 28, 27,
25, 26, 27,
25, 24, 26,
23, 24, 25,
22, 24, 23,
21, 22, 23,
21, 20, 22,
19, 20, 21,
18, 20, 19,
17, 18, 19,
17, 16, 18,
15, 16, 17,
14, 16, 15,
12, 14, 15,
12, 13, 14,
50, 51, 52,
99, 51, 50,
52, 53, 50,
51, 99, 98,
54, 53, 52,
98, 99, 97,
53, 54, 55,
97, 96, 98,
55, 54, 56,
95, 96, 97,
56, 57, 55,
96, 95, 94,
58, 57, 56,
94, 95, 93,
57, 58, 59,
93, 92, 94,
60, 59, 58,
59, 60, 61,
91, 92, 93,
92, 91, 90,
90, 91, 89,
89, 88, 90,
87, 88, 89,
88, 87, 86,
86, 87, 85,
85, 84, 86,
83, 84, 85,
84, 83, 82,
82, 83, 81,
81, 80, 82,
79, 80, 81,
80, 79, 78,
78, 79, 77,
77, 76, 78,
75, 76, 77,
76, 75, 74,
74, 75, 73,
73, 72, 74,
71, 72, 73,
72, 71, 70,
70, 71, 69,
69, 68, 70,
67, 68, 69,
68, 67, 66,
66, 67, 64,
64, 63, 66,
62, 63, 64,
63, 62, 65
};
