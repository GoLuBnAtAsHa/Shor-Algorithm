# **Shor's algorithm in C++**
Many encryption systems, like RSA, depend on the fact that it is extremely inefficient to try to factor very **large** numbers. On a classical computer, this could take an extremely **long** time.

In 1994, Peter Shor created an algorithm for the factoring of large numbers, called Shor's Algorithm.

Theoretically, in a quantum computer, using this algorithm, huge numbers can be factored easily and in a short amount of time, demonstrating quantum supremacy. Unfortunately, we are not at that stage yet, because  quantum computers are still in their infancy.
**Please note:** When I say quantum supremacy, this does not mean that quantum computers can outperform classical computers in every aspect, they are more efficient in completing certain tasks, like Shor's Algorithm, because of the laws of quantum mechanics.

I have created a classical version of Shor's algorithm. I am currently looking to implement this into Ibm q.

**This algorithm is free to use.**

# Pseudocode:
**Step 1**: Pick a random number less than N.

**Step 2:** Find r, the period of x^r mod n, where x is coprime to N(they both have only one factor: 1) R is the smallest positve number that x^r=1(Technically 1mod N, which is just 1) In an actual quantum computer, this is where the quantum part would happen.. Using the quantum fourier transform, the period that satisfies the equation will be amplified and be used for the calculation.

**Step 3:** Check that r is even and x^r/2+1 does not equal to 0.

**Step 4:**
Let q=gcd(x^r/2-1,N)
let o =gcd(x^r/2+1,N)
