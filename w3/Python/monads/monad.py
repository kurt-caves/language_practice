from __future__ import annotations
from typing import Any, Callable, Generic, TypeVar

T = TypeVar("T")
U = TypeVar("U")

class Monad(Generic[T]):
    def __init__(self, value: T) -> None:
        self.value = value

    def bind(self, func: Callable[[T], Monad[U]]) -> Monad[U]:
        return func(self)
    
    @staticmethod
    def unit(value: Any) -> Monad[Any]:
        return Monad(value)

def add_one(x: int) -> int:
    return x + 1

def multiply_by_two(x: int) -> int:
    return x * 2

def main() -> None:
    monad = Monad(5)

if __name__ == "__main__":
    main()