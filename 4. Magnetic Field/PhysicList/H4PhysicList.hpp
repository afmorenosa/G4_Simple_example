#ifndef H4PHYSICLIST_HG4
#define H4PHYSICLIST_HG4

#include "GeneralG4.hpp"
#include "G4VUserPhysicsList.hh"

class H4PhysicList : public G4VUserPhysicsList {
public:
  H4PhysicList ();
  virtual ~H4PhysicList ();

  void ConstructParticle();
  void ConstructProcess();

private:
  G4VPhysicsConstructor *em_physics_list;
};

#endif // H4PHYSICLIST_HG4
