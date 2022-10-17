#include "gtest/gtest.h"
#include "Traktrix.h"

using namespace ns;

TEST(Constructor, DefaultConstructor) {
    Traktrix s;
    ASSERT_EQ(0, s.intersection(30).x);
    ASSERT_EQ(0, s.intersection(30).y);
}

TEST(TraktrixMethods, Parameters) {
    Traktrix a(12);
    ASSERT_NEAR(-5, a.intersection(30).x, 0.001);
    ASSERT_NEAR(5, a.intersection(30).y, 0.001);
    ASSERT_NEAR(8.31777, a.length(30), 0.001);
    ASSERT_NEAR(36, a.radius(30), 1);
    ASSERT_NEAR(37.6991, a.firstSquare(30), 0.001);
    ASSERT_NEAR(301.593, a.secondSquare(30), 0.001);
    ASSERT_NEAR(0, a.volume(0), 0.001);
}


int nemain(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
