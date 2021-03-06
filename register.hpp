#include "gdal_nodes.hpp"

using namespace geoflow::nodes::gdal;

void register_nodes(geoflow::NodeRegister &node_register)
{
  node_register.register_node<OGRLoaderNode>("OGRLoader");
  node_register.register_node<OGRWriterNode>("OGRWriter");
  node_register.register_node<CSVLoaderNode>("CSVLoader");
  node_register.register_node<CSVWriterNode>("CSVWriter");
  node_register.register_node<GEOSMergeLinesNode>("GEOSMergeLines");
  node_register.register_node<GDALDatabaseConnectNode>("GDALDatabaseConnectNode");
}