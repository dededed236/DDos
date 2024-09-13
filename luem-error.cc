[  0%] Building CXX object scratch/CMakeFiles/scratch_topology2.dir/topology2.cc.o
/home/ddos/ns-allinone-3.42/ns-3.42/scratch/topology2.cc: In function ‘int main(int, char**)’:
/home/ddos/ns-allinone-3.42/ns-3.42/scratch/topology2.cc:109:63: error: cannot convert ‘std::__cxx11::basic_string<char>’ to ‘ns3::Ipv4Address’
  109 |         edgeAddresses.SetBase("10.1." + std::to_string(i + 2) + ".0", "255.255.255.0");
      |                               ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~
      |                                                               |
      |                                                               std::__cxx11::basic_string<char>
In file included from /home/ddos/ns-allinone-3.42/ns-3.42/build/include/ns3/ipv4-address-helper.h:1,
                 from /home/ddos/ns-allinone-3.42/ns-3.42/build/include/ns3/internet-module.h:8,
                 from /home/ddos/ns-allinone-3.42/ns-3.42/scratch/topology2.cc:5:
/home/ddos/ns-allinone-3.42/ns-3.42/src/internet/helper/ipv4-address-helper.h:95:30: note:   initializing argument 1 of ‘void ns3::Ipv4AddressHelper::SetBase(ns3::Ipv4Address, ns3::Ipv4Mask, ns3::Ipv4Address)’
   95 |     void SetBase(Ipv4Address network, Ipv4Mask mask, Ipv4Address base = "0.0.0.1");
      |                  ~~~~~~~~~~~~^~~~~~~
/home/ddos/ns-allinone-3.42/ns-3.42/scratch/topology2.cc:115:62: error: cannot convert ‘std::__cxx11::basic_string<char>’ to ‘ns3::Ipv4Address’
  115 |         botAddresses.SetBase("10.2." + std::to_string(i + 1) + ".0", "255.255.255.0");
      |                              ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~
      |                                                              |
      |                                                              std::__cxx11::basic_string<char>
/home/ddos/ns-allinone-3.42/ns-3.42/src/internet/helper/ipv4-address-helper.h:95:30: note:   initializing argument 1 of ‘void ns3::Ipv4AddressHelper::SetBase(ns3::Ipv4Address, ns3::Ipv4Mask, ns3::Ipv4Address)’
   95 |     void SetBase(Ipv4Address network, Ipv4Mask mask, Ipv4Address base = "0.0.0.1");
      |                  ~~~~~~~~~~~~^~~~~~~
/home/ddos/ns-allinone-3.42/ns-3.42/scratch/topology2.cc:121:64: error: cannot convert ‘std::__cxx11::basic_string<char>’ to ‘ns3::Ipv4Address’
  121 |         extraAddresses.SetBase("10.3." + std::to_string(i + 1) + ".0", "255.255.255.0");
      |                                ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~^~~~~~
      |                                                                |
      |                                                                std::__cxx11::basic_string<char>
/home/ddos/ns-allinone-3.42/ns-3.42/src/internet/helper/ipv4-address-helper.h:95:30: note:   initializing argument 1 of ‘void ns3::Ipv4AddressHelper::SetBase(ns3::Ipv4Address, ns3::Ipv4Mask, ns3::Ipv4Address)’
   95 |     void SetBase(Ipv4Address network, Ipv4Mask mask, Ipv4Address base = "0.0.0.1");
      |                  ~~~~~~~~~~~~^~~~~~~
gmake[3]: *** [scratch/CMakeFiles/scratch_topology2.dir/build.make:76: scratch/CMakeFiles/scratch_topology2.dir/topology2.cc.o] Error 1
gmake[2]: *** [CMakeFiles/Makefile2:17412: scratch/CMakeFiles/scratch_topology2.dir/all] Error 2
gmake[1]: *** [CMakeFiles/Makefile2:17418: scratch/CMakeFiles/scratch_topology2.dir/rule] Error 2
gmake: *** [Makefile:6126: scratch_topology2] Error 2
