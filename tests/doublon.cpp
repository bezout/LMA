#include <libv/lma/lma.hpp>



struct F { bool operator()(const Eigen::Vector2d&, const Eigen::Vector3d&, const Eigen::Vector2d&, double&) const { return true; }};

int main()
{
  Eigen::Vector2d a;
  Eigen::Vector3d b;
  Eigen::Vector2d c;

  lma::Solver<lma::mpl::vector<Eigen::Vector2d,Eigen::Vector3d>,F>().add(F{},&a,&b,&c).solve(lma::DENSE);
  return 0;
}