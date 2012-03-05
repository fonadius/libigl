#ifndef IGL_WRITEMESH_H
#define IGL_WRITEMESH_H
#include "igl_inline.h"

#include <string>
#include <vector>
#include <Eigen/Core>

namespace igl
{
  // save a tetrahedral volume mesh to a .mesh file
  //
  // Templates:
  //   Scalar  type for positions and vectors (will be cast as double)
  //   Index  type for indices (will be cast to int)
  // Input:
  //   mesh_file_name  path of .mesh file
  // Outputs:
  //   V  double matrix of vertex positions  #V by 3
  //   T  #T list of tet indices into vertex positions
  //   F  #F list of face indices into vertex positions
  template <typename Scalar, typename Index>
  IGL_INLINE bool writeMESH(
    const std::string mesh_file_name,
    std::vector<std::vector<Scalar > > & V,
    std::vector<std::vector<Index > > & T,
    std::vector<std::vector<Index > > & F);

  // Input:
  //   mesh_file_name  path of .mesh file
  // Outputs:
  //   V  eigen double matrix #V by 3
  //   T  eigen int matrix #T by 4
  //   F  eigen int matrix #F by 3
  IGL_INLINE bool writeMESH(
    const std::string str,
    Eigen::MatrixXd& V,
    Eigen::MatrixXi& T,
    Eigen::MatrixXi& F);
}

#ifdef IGL_HEADER_ONLY
#  include "writeMESH.cpp"
#endif

#endif