/*#include<iostream>
#include<vector>
using namespace std;
vector<int> V;
int main(){
    V.push_back(0);V.push_back(4);V.push_back(7);V.push_back(44);V.push_back(47);V.push_back(74);V.push_back(77);V.push_back(444);
    V.push_back(447);V.push_back(474);V.push_back(477);V.push_back(744);V.push_back(747);V.push_back(774);V.push_back(777);V.push_back(4444);
    V.push_back(4447);V.push_back(4474);V.push_back(4477);V.push_back(4744);V.push_back(4747);V.push_back(4774);V.push_back(4777);V.push_back(7444);
    V.push_back(7447);V.push_back(7474);V.push_back(7477);V.push_back(7744);V.push_back(7747);V.push_back(7774);V.push_back(7777);V.push_back(44444);
    V.push_back(44447);V.push_back(44474);V.push_back(44477);V.push_back(44744);V.push_back(44747);V.push_back(44774);V.push_back(44777);V.push_back(47444);
    V.push_back(47447);V.push_back(47474);V.push_back(47477);V.push_back(47744);V.push_back(47747);V.push_back(47774);V.push_back(47777);V.push_back(74444);
    V.push_back(74447);V.push_back(74474);V.push_back(74477);V.push_back(74744);V.push_back(74747);V.push_back(74774);V.push_back(74777);V.push_back(77444);
    V.push_back(77447);V.push_back(77474);V.push_back(77477);V.push_back(77744);V.push_back(77747);V.push_back(77774);V.push_back(77777);V.push_back(444444);
    V.push_back(444447);V.push_back(444474);V.push_back(444477);V.push_back(444744);V.push_back(444747);V.push_back(444774);V.push_back(444777);V.push_back(447444);
    V.push_back(447447);V.push_back(447474);V.push_back(447477);V.push_back(447744);V.push_back(447747);V.push_back(447774);V.push_back(447777);V.push_back(474444);
    V.push_back(474447);V.push_back(474474);V.push_back(474477);V.push_back(474744);V.push_back(474747);V.push_back(474774);V.push_back(474777);V.push_back(477444);
    V.push_back(477447);V.push_back(477474);V.push_back(477477);V.push_back(477744);V.push_back(477747);V.push_back(477774);V.push_back(477777);V.push_back(744444);
    V.push_back(744447);V.push_back(744474);V.push_back(744477);V.push_back(744744);V.push_back(744747);V.push_back(744774);V.push_back(744777);V.push_back(747444);
    V.push_back(747447);V.push_back(747474);V.push_back(747477);V.push_back(747744);V.push_back(747747);V.push_back(747774);V.push_back(747777);V.push_back(774444);
    V.push_back(774447);V.push_back(774474);V.push_back(774477);V.push_back(774744);V.push_back(774747);V.push_back(774774);V.push_back(774777);V.push_back(777444);
    V.push_back(777447);V.push_back(777474);V.push_back(777477);V.push_back(777744);V.push_back(777747);V.push_back(777774);V.push_back(777777);V.push_back(4444444);
    V.push_back(4444447);V.push_back(4444474);V.push_back(4444477);V.push_back(4444744);V.push_back(4444747);V.push_back(4444774);V.push_back(4444777);V.push_back(4447444);
    V.push_back(4447447);V.push_back(4447474);V.push_back(4447477);V.push_back(4447744);V.push_back(4447747);V.push_back(4447774);V.push_back(4447777);V.push_back(4474444);
    V.push_back(4474447);V.push_back(4474474);V.push_back(4474477);V.push_back(4474744);V.push_back(4474747);V.push_back(4474774);V.push_back(4474777);V.push_back(4477444);
    V.push_back(4477447);V.push_back(4477474);V.push_back(4477477);V.push_back(4477744);V.push_back(4477747);V.push_back(4477774);V.push_back(4477777);V.push_back(4744444);
    V.push_back(4744447);V.push_back(4744474);V.push_back(4744477);V.push_back(4744744);V.push_back(4744747);V.push_back(4744774);V.push_back(4744777);V.push_back(4747444);
    V.push_back(4747447);V.push_back(4747474);V.push_back(4747477);V.push_back(4747744);V.push_back(4747747);V.push_back(4747774);V.push_back(4747777);V.push_back(4774444);
    V.push_back(4774447);V.push_back(4774474);V.push_back(4774477);V.push_back(4774744);V.push_back(4774747);V.push_back(4774774);V.push_back(4774777);V.push_back(4777444);
    V.push_back(4777447);V.push_back(4777474);V.push_back(4777477);V.push_back(4777744);V.push_back(4777747);V.push_back(4777774);V.push_back(4777777);V.push_back(7444444);
    V.push_back(7444447);V.push_back(7444474);V.push_back(7444477);V.push_back(7444744);V.push_back(7444747);V.push_back(7444774);V.push_back(7444777);V.push_back(7447444);
    V.push_back(7447447);V.push_back(7447474);V.push_back(7447477);V.push_back(7447744);V.push_back(7447747);V.push_back(7447774);V.push_back(7447777);V.push_back(7474444);
    V.push_back(7474447);V.push_back(7474474);V.push_back(7474477);V.push_back(7474744);V.push_back(7474747);V.push_back(7474774);V.push_back(7474777);V.push_back(7477444);
    V.push_back(7477447);V.push_back(7477474);V.push_back(7477477);V.push_back(7477744);V.push_back(7477747);V.push_back(7477774);V.push_back(7477777);V.push_back(7744444);
    V.push_back(7744447);V.push_back(7744474);V.push_back(7744477);V.push_back(7744744);V.push_back(7744747);V.push_back(7744774);V.push_back(7744777);V.push_back(7747444);
    V.push_back(7747447);V.push_back(7747474);V.push_back(7747477);V.push_back(7747744);V.push_back(7747747);V.push_back(7747774);V.push_back(7747777);V.push_back(7774444);
    V.push_back(7774447);V.push_back(7774474);V.push_back(7774477);V.push_back(7774744);V.push_back(7774747);V.push_back(7774774);V.push_back(7774777);V.push_back(7777444);
    V.push_back(7777447);V.push_back(7777474);V.push_back(7777477);V.push_back(7777744);V.push_back(7777747);V.push_back(7777774);V.push_back(7777777);V.push_back(44444444);
    V.push_back(44444447);V.push_back(44444474);V.push_back(44444477);V.push_back(44444744);V.push_back(44444747);V.push_back(44444774);V.push_back(44444777);V.push_back(44447444);
    V.push_back(44447447);V.push_back(44447474);V.push_back(44447477);V.push_back(44447744);V.push_back(44447747);V.push_back(44447774);V.push_back(44447777);V.push_back(44474444);
    V.push_back(44474447);V.push_back(44474474);V.push_back(44474477);V.push_back(44474744);V.push_back(44474747);V.push_back(44474774);V.push_back(44474777);V.push_back(44477444);
    V.push_back(44477447);V.push_back(44477474);V.push_back(44477477);V.push_back(44477744);V.push_back(44477747);V.push_back(44477774);V.push_back(44477777);V.push_back(44744444);
    V.push_back(44744447);V.push_back(44744474);V.push_back(44744477);V.push_back(44744744);V.push_back(44744747);V.push_back(44744774);V.push_back(44744777);V.push_back(44747444);
    V.push_back(44747447);V.push_back(44747474);V.push_back(44747477);V.push_back(44747744);V.push_back(44747747);V.push_back(44747774);V.push_back(44747777);V.push_back(44774444);
    V.push_back(44774447);V.push_back(44774474);V.push_back(44774477);V.push_back(44774744);V.push_back(44774747);V.push_back(44774774);V.push_back(44774777);V.push_back(44777444);
    V.push_back(44777447);V.push_back(44777474);V.push_back(44777477);V.push_back(44777744);V.push_back(44777747);V.push_back(44777774);V.push_back(44777777);V.push_back(47444444);
    V.push_back(47444447);V.push_back(47444474);V.push_back(47444477);V.push_back(47444744);V.push_back(47444747);V.push_back(47444774);V.push_back(47444777);V.push_back(47447444);
    V.push_back(47447447);V.push_back(47447474);V.push_back(47447477);V.push_back(47447744);V.push_back(47447747);V.push_back(47447774);V.push_back(47447777);V.push_back(47474444);
    V.push_back(47474447);V.push_back(47474474);V.push_back(47474477);V.push_back(47474744);V.push_back(47474747);V.push_back(47474774);V.push_back(47474777);V.push_back(47477444);
    V.push_back(47477447);V.push_back(47477474);V.push_back(47477477);V.push_back(47477744);V.push_back(47477747);V.push_back(47477774);V.push_back(47477777);V.push_back(47744444);
    V.push_back(47744447);V.push_back(47744474);V.push_back(47744477);V.push_back(47744744);V.push_back(47744747);V.push_back(47744774);V.push_back(47744777);V.push_back(47747444);
    V.push_back(47747447);V.push_back(47747474);V.push_back(47747477);V.push_back(47747744);V.push_back(47747747);V.push_back(47747774);V.push_back(47747777);V.push_back(47774444);
    V.push_back(47774447);V.push_back(47774474);V.push_back(47774477);V.push_back(47774744);V.push_back(47774747);V.push_back(47774774);V.push_back(47774777);V.push_back(47777444);
    V.push_back(47777447);V.push_back(47777474);V.push_back(47777477);V.push_back(47777744);V.push_back(47777747);V.push_back(47777774);V.push_back(47777777);V.push_back(74444444);
    V.push_back(74444447);V.push_back(74444474);V.push_back(74444477);V.push_back(74444744);V.push_back(74444747);V.push_back(74444774);V.push_back(74444777);V.push_back(74447444);
    V.push_back(74447447);V.push_back(74447474);V.push_back(74447477);V.push_back(74447744);V.push_back(74447747);V.push_back(74447774);V.push_back(74447777);V.push_back(74474444);
    V.push_back(74474447);V.push_back(74474474);V.push_back(74474477);V.push_back(74474744);V.push_back(74474747);V.push_back(74474774);V.push_back(74474777);V.push_back(74477444);
    V.push_back(74477447);V.push_back(74477474);V.push_back(74477477);V.push_back(74477744);V.push_back(74477747);V.push_back(74477774);V.push_back(74477777);V.push_back(74744444);
    V.push_back(74744447);V.push_back(74744474);V.push_back(74744477);V.push_back(74744744);V.push_back(74744747);V.push_back(74744774);V.push_back(74744777);V.push_back(74747444);
    V.push_back(74747447);V.push_back(74747474);V.push_back(74747477);V.push_back(74747744);V.push_back(74747747);V.push_back(74747774);V.push_back(74747777);V.push_back(74774444);
    V.push_back(74774447);V.push_back(74774474);V.push_back(74774477);V.push_back(74774744);V.push_back(74774747);V.push_back(74774774);V.push_back(74774777);V.push_back(74777444);
    V.push_back(74777447);V.push_back(74777474);V.push_back(74777477);V.push_back(74777744);V.push_back(74777747);V.push_back(74777774);V.push_back(74777777);V.push_back(77444444);
    V.push_back(77444447);V.push_back(77444474);V.push_back(77444477);V.push_back(77444744);V.push_back(77444747);V.push_back(77444774);V.push_back(77444777);V.push_back(77447444);
    V.push_back(77447447);V.push_back(77447474);V.push_back(77447477);V.push_back(77447744);V.push_back(77447747);V.push_back(77447774);V.push_back(77447777);V.push_back(77474444);
    V.push_back(77474447);V.push_back(77474474);V.push_back(77474477);V.push_back(77474744);V.push_back(77474747);V.push_back(77474774);V.push_back(77474777);V.push_back(77477444);
    V.push_back(77477447);V.push_back(77477474);V.push_back(77477477);V.push_back(77477744);V.push_back(77477747);V.push_back(77477774);V.push_back(77477777);V.push_back(77744444);
    V.push_back(77744447);V.push_back(77744474);V.push_back(77744477);V.push_back(77744744);V.push_back(77744747);V.push_back(77744774);V.push_back(77744777);V.push_back(77747444);
    V.push_back(77747447);V.push_back(77747474);V.push_back(77747477);V.push_back(77747744);V.push_back(77747747);V.push_back(77747774);V.push_back(77747777);V.push_back(77774444);
    V.push_back(77774447);V.push_back(77774474);V.push_back(77774477);V.push_back(77774744);V.push_back(77774747);V.push_back(77774774);V.push_back(77774777);V.push_back(77777444);
    V.push_back(77777447);V.push_back(77777474);V.push_back(77777477);V.push_back(77777744);V.push_back(77777747);V.push_back(77777774);V.push_back(77777777);V.push_back(444444444);
    V.push_back(444444447);V.push_back(444444474);V.push_back(444444477);V.push_back(444444744);V.push_back(444444747);V.push_back(444444774);V.push_back(444444777);V.push_back(444447444);
    V.push_back(444447447);V.push_back(444447474);V.push_back(444447477);V.push_back(444447744);V.push_back(444447747);V.push_back(444447774);V.push_back(444447777);V.push_back(444474444);
    V.push_back(444474447);V.push_back(444474474);V.push_back(444474477);V.push_back(444474744);V.push_back(444474747);V.push_back(444474774);V.push_back(444474777);V.push_back(444477444);
    V.push_back(444477447);V.push_back(444477474);V.push_back(444477477);V.push_back(444477744);V.push_back(444477747);V.push_back(444477774);V.push_back(444477777);V.push_back(444744444);
    V.push_back(444744447);V.push_back(444744474);V.push_back(444744477);V.push_back(444744744);V.push_back(444744747);V.push_back(444744774);V.push_back(444744777);V.push_back(444747444);
    V.push_back(444747447);V.push_back(444747474);V.push_back(444747477);V.push_back(444747744);V.push_back(444747747);V.push_back(444747774);V.push_back(444747777);V.push_back(444774444);
    V.push_back(444774447);V.push_back(444774474);V.push_back(444774477);V.push_back(444774744);V.push_back(444774747);V.push_back(444774774);V.push_back(444774777);V.push_back(444777444);
    V.push_back(444777447);V.push_back(444777474);V.push_back(444777477);V.push_back(444777744);V.push_back(444777747);V.push_back(444777774);V.push_back(444777777);V.push_back(447444444);
    V.push_back(447444447);V.push_back(447444474);V.push_back(447444477);V.push_back(447444744);V.push_back(447444747);V.push_back(447444774);V.push_back(447444777);V.push_back(447447444);
    V.push_back(447447447);V.push_back(447447474);V.push_back(447447477);V.push_back(447447744);V.push_back(447447747);V.push_back(447447774);V.push_back(447447777);V.push_back(447474444);
    V.push_back(447474447);V.push_back(447474474);V.push_back(447474477);V.push_back(447474744);V.push_back(447474747);V.push_back(447474774);V.push_back(447474777);V.push_back(447477444);
    V.push_back(447477447);V.push_back(447477474);V.push_back(447477477);V.push_back(447477744);V.push_back(447477747);V.push_back(447477774);V.push_back(447477777);V.push_back(447744444);
    V.push_back(447744447);V.push_back(447744474);V.push_back(447744477);V.push_back(447744744);V.push_back(447744747);V.push_back(447744774);V.push_back(447744777);V.push_back(447747444);
    V.push_back(447747447);V.push_back(447747474);V.push_back(447747477);V.push_back(447747744);V.push_back(447747747);V.push_back(447747774);V.push_back(447747777);V.push_back(447774444);
    V.push_back(447774447);V.push_back(447774474);V.push_back(447774477);V.push_back(447774744);V.push_back(447774747);V.push_back(447774774);V.push_back(447774777);V.push_back(447777444);
    V.push_back(447777447);V.push_back(447777474);V.push_back(447777477);V.push_back(447777744);V.push_back(447777747);V.push_back(447777774);V.push_back(447777777);V.push_back(474444444);
    V.push_back(474444447);V.push_back(474444474);V.push_back(474444477);V.push_back(474444744);V.push_back(474444747);V.push_back(474444774);V.push_back(474444777);V.push_back(474447444);
    V.push_back(474447447);V.push_back(474447474);V.push_back(474447477);V.push_back(474447744);V.push_back(474447747);V.push_back(474447774);V.push_back(474447777);V.push_back(474474444);
    V.push_back(474474447);V.push_back(474474474);V.push_back(474474477);V.push_back(474474744);V.push_back(474474747);V.push_back(474474774);V.push_back(474474777);V.push_back(474477444);
    V.push_back(474477447);V.push_back(474477474);V.push_back(474477477);V.push_back(474477744);V.push_back(474477747);V.push_back(474477774);V.push_back(474477777);V.push_back(474744444);
    V.push_back(474744447);V.push_back(474744474);V.push_back(474744477);V.push_back(474744744);V.push_back(474744747);V.push_back(474744774);V.push_back(474744777);V.push_back(474747444);
    V.push_back(474747447);V.push_back(474747474);V.push_back(474747477);V.push_back(474747744);V.push_back(474747747);V.push_back(474747774);V.push_back(474747777);V.push_back(474774444);
    V.push_back(474774447);V.push_back(474774474);V.push_back(474774477);V.push_back(474774744);V.push_back(474774747);V.push_back(474774774);V.push_back(474774777);V.push_back(474777444);
    V.push_back(474777447);V.push_back(474777474);V.push_back(474777477);V.push_back(474777744);V.push_back(474777747);V.push_back(474777774);V.push_back(474777777);V.push_back(477444444);
    V.push_back(477444447);V.push_back(477444474);V.push_back(477444477);V.push_back(477444744);V.push_back(477444747);V.push_back(477444774);V.push_back(477444777);V.push_back(477447444);
    V.push_back(477447447);V.push_back(477447474);V.push_back(477447477);V.push_back(477447744);V.push_back(477447747);V.push_back(477447774);V.push_back(477447777);V.push_back(477474444);
    V.push_back(477474447);V.push_back(477474474);V.push_back(477474477);V.push_back(477474744);V.push_back(477474747);V.push_back(477474774);V.push_back(477474777);V.push_back(477477444);
    V.push_back(477477447);V.push_back(477477474);V.push_back(477477477);V.push_back(477477744);V.push_back(477477747);V.push_back(477477774);V.push_back(477477777);V.push_back(477744444);
    V.push_back(477744447);V.push_back(477744474);V.push_back(477744477);V.push_back(477744744);V.push_back(477744747);V.push_back(477744774);V.push_back(477744777);V.push_back(477747444);
    V.push_back(477747447);V.push_back(477747474);V.push_back(477747477);V.push_back(477747744);V.push_back(477747747);V.push_back(477747774);V.push_back(477747777);V.push_back(477774444);
    V.push_back(477774447);V.push_back(477774474);V.push_back(477774477);V.push_back(477774744);V.push_back(477774747);V.push_back(477774774);V.push_back(477774777);V.push_back(477777444);
    V.push_back(477777447);V.push_back(477777474);V.push_back(477777477);V.push_back(477777744);V.push_back(477777747);V.push_back(477777774);V.push_back(477777777);V.push_back(744444444);
    V.push_back(744444447);V.push_back(744444474);V.push_back(744444477);V.push_back(744444744);V.push_back(744444747);V.push_back(744444774);V.push_back(744444777);V.push_back(744447444);
    V.push_back(744447447);V.push_back(744447474);V.push_back(744447477);V.push_back(744447744);V.push_back(744447747);V.push_back(744447774);V.push_back(744447777);V.push_back(744474444);
    V.push_back(744474447);V.push_back(744474474);V.push_back(744474477);V.push_back(744474744);V.push_back(744474747);V.push_back(744474774);V.push_back(744474777);V.push_back(744477444);
    V.push_back(744477447);V.push_back(744477474);V.push_back(744477477);V.push_back(744477744);V.push_back(744477747);V.push_back(744477774);V.push_back(744477777);V.push_back(744744444);
    V.push_back(744744447);V.push_back(744744474);V.push_back(744744477);V.push_back(744744744);V.push_back(744744747);V.push_back(744744774);V.push_back(744744777);V.push_back(744747444);
    V.push_back(744747447);V.push_back(744747474);V.push_back(744747477);V.push_back(744747744);V.push_back(744747747);V.push_back(744747774);V.push_back(744747777);V.push_back(744774444);
    V.push_back(744774447);V.push_back(744774474);V.push_back(744774477);V.push_back(744774744);V.push_back(744774747);V.push_back(744774774);V.push_back(744774777);V.push_back(744777444);
    V.push_back(744777447);V.push_back(744777474);V.push_back(744777477);V.push_back(744777744);V.push_back(744777747);V.push_back(744777774);V.push_back(744777777);V.push_back(747444444);
    V.push_back(747444447);V.push_back(747444474);V.push_back(747444477);V.push_back(747444744);V.push_back(747444747);V.push_back(747444774);V.push_back(747444777);V.push_back(747447444);
    V.push_back(747447447);V.push_back(747447474);V.push_back(747447477);V.push_back(747447744);V.push_back(747447747);V.push_back(747447774);V.push_back(747447777);V.push_back(747474444);
    V.push_back(747474447);V.push_back(747474474);V.push_back(747474477);V.push_back(747474744);V.push_back(747474747);V.push_back(747474774);V.push_back(747474777);V.push_back(747477444);
    V.push_back(747477447);V.push_back(747477474);V.push_back(747477477);V.push_back(747477744);V.push_back(747477747);V.push_back(747477774);V.push_back(747477777);V.push_back(747744444);
    V.push_back(747744447);V.push_back(747744474);V.push_back(747744477);V.push_back(747744744);V.push_back(747744747);V.push_back(747744774);V.push_back(747744777);V.push_back(747747444);
    V.push_back(747747447);V.push_back(747747474);V.push_back(747747477);V.push_back(747747744);V.push_back(747747747);V.push_back(747747774);V.push_back(747747777);V.push_back(747774444);
    V.push_back(747774447);V.push_back(747774474);V.push_back(747774477);V.push_back(747774744);V.push_back(747774747);V.push_back(747774774);V.push_back(747774777);V.push_back(747777444);
    V.push_back(747777447);V.push_back(747777474);V.push_back(747777477);V.push_back(747777744);V.push_back(747777747);V.push_back(747777774);V.push_back(747777777);V.push_back(774444444);
    V.push_back(774444447);V.push_back(774444474);V.push_back(774444477);V.push_back(774444744);V.push_back(774444747);V.push_back(774444774);V.push_back(774444777);V.push_back(774447444);
    V.push_back(774447447);V.push_back(774447474);V.push_back(774447477);V.push_back(774447744);V.push_back(774447747);V.push_back(774447774);V.push_back(774447777);V.push_back(774474444);
    V.push_back(774474447);V.push_back(774474474);V.push_back(774474477);V.push_back(774474744);V.push_back(774474747);V.push_back(774474774);V.push_back(774474777);V.push_back(774477444);
    V.push_back(774477447);V.push_back(774477474);V.push_back(774477477);V.push_back(774477744);V.push_back(774477747);V.push_back(774477774);V.push_back(774477777);V.push_back(774744444);
    V.push_back(774744447);V.push_back(774744474);V.push_back(774744477);V.push_back(774744744);V.push_back(774744747);V.push_back(774744774);V.push_back(774744777);V.push_back(774747444);
    V.push_back(774747447);V.push_back(774747474);V.push_back(774747477);V.push_back(774747744);V.push_back(774747747);V.push_back(774747774);V.push_back(774747777);V.push_back(774774444);
    V.push_back(774774447);V.push_back(774774474);V.push_back(774774477);V.push_back(774774744);V.push_back(774774747);V.push_back(774774774);V.push_back(774774777);V.push_back(774777444);
    V.push_back(774777447);V.push_back(774777474);V.push_back(774777477);V.push_back(774777744);V.push_back(774777747);V.push_back(774777774);V.push_back(774777777);V.push_back(777444444);
    V.push_back(777444447);V.push_back(777444474);V.push_back(777444477);V.push_back(777444744);V.push_back(777444747);V.push_back(777444774);V.push_back(777444777);V.push_back(777447444);
    V.push_back(777447447);V.push_back(777447474);V.push_back(777447477);V.push_back(777447744);V.push_back(777447747);V.push_back(777447774);V.push_back(777447777);V.push_back(777474444);
    V.push_back(777474447);V.push_back(777474474);V.push_back(777474477);V.push_back(777474744);V.push_back(777474747);V.push_back(777474774);V.push_back(777474777);V.push_back(777477444);
    V.push_back(777477447);V.push_back(777477474);V.push_back(777477477);V.push_back(777477744);V.push_back(777477747);V.push_back(777477774);V.push_back(777477777);V.push_back(777744444);
    V.push_back(777744447);V.push_back(777744474);V.push_back(777744477);V.push_back(777744744);V.push_back(777744747);V.push_back(777744774);V.push_back(777744777);V.push_back(777747444);
    V.push_back(777747447);V.push_back(777747474);V.push_back(777747477);V.push_back(777747744);V.push_back(777747747);V.push_back(777747774);V.push_back(777747777);V.push_back(777774444);
    V.push_back(777774447);V.push_back(777774474);V.push_back(777774477);V.push_back(777774744);V.push_back(777774747);V.push_back(777774774);V.push_back(777774777);V.push_back(777777444);
    V.push_back(777777447);V.push_back(777777474);V.push_back(777777477);V.push_back(777777744);V.push_back(777777747);V.push_back(777777774);V.push_back(777777777);
    int N;
    cin>>N;
    for(int i=1;i<V.size();i++){
        if(V[i]==N){
            cout<<i<<endl;
            return 0;
        }
    }

}*/

#include<iostream>
#include<set>
using namespace std;

int main(){
    long long N, res;
    cin>>N;
    set<long long>S;
    set<long long>:: iterator it;
    for(int i=0;i<100000;i++){
        res=0;
        for(int j=0;j<10;j++){
            res*=10;
            if(i&(1<<j))
                res+=7;
            else res+=4;
            if(res>0)
                S.insert(res);
        }
    }
    it = S.find(N);
    int cnt = distance(S.begin(), it);
    cout<<cnt+1<<endl;
}
