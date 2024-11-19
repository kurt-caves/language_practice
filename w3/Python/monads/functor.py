from __future__ import annotations
from typing import Any, Callable

class Functor:
    # value
    def __init__(self, value: Any) -> None:
        self.value = value
    # method to do something with that value
    # map returns what a functor is
    # callable is from typing module
    def map(self, func: Callable[[Any], Any]) -> Functor:
        return Functor(func(self.value))
    
def add_one(x: int) -> int:
    return x + 1

def multiply_by_two(x: int) -> int:
    return x * 2

def main() -> None:
    
    f = Functor(5)
    assert isinstance(f, Functor)

    # Mapping within the same category (Functor -> Functor)
    g = f.map(add_one) # g is also a functor instance
    print(g.value)
    print(f.value)
    # preserve the structure
    assert isinstance(g, Functor)

    # preserving composition
    assert (
        f.map(add_one).map(multiply_by_two).value == f.map(lambda x: multiply_by_two(add_one(x))).value
    )
    result = f.map(add_one).map(multiply_by_two).map(add_one).value
    print(result)
if __name__ == "__main__":
    main()