namespace boool {
    bool baseAnd(bool a, bool b) {
        return a && b;
    }
    bool baseOr(bool a, bool b) {
        return a || b;
    }
    bool baseNot(bool a) {
        return !a;
    }
    bool andNot(bool a, bool b) {
        return baseAnd(a, baseNot(b));
    }
    bool orNot(bool a, bool b) {
        return baseOr(a, baseNot(b));
    }
    bool notAnd(bool a, bool b) {
        return baseNot(baseAnd(a, b));
    }
    bool notOr(bool a, bool b) {
        return baseNot(baseOr(a, b));
    }
}