//Extra Part For ActorHistory.hpp
#ifdef EXTRA_INCLUDE_PART_ACTORHISTORY
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct Snapshot {
    Snapshot() = delete;
    Snapshot(Snapshot const&) = delete;
    Snapshot(Snapshot const&&) = delete;
};

#endif
