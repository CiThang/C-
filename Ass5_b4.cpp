#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

// Function to sequence the order of jobs
vector<int> sequenceJobs(int n, vector<pair<int, int>>& dependencies) {
    unordered_map<int, queue<int>> dependents;
    vector<int> indegree(n, 0);

    // Build dependents and indegree for each job
    for (auto& dependency : dependencies) {
        int job_i = dependency.first;
        int job_j = dependency.second;
        dependents[job_i].push(job_j);
        indegree[job_j]++;
    }

    // Initialize a queue for jobs with indegree 0
    queue<int> zeroIndegreeJobs;
    for (int i = 0; i < n; ++i) {
        if (indegree[i] == 0) {
            zeroIndegreeJobs.push(i);
        }
    }

    vector<int> sequence;
    while (!zeroIndegreeJobs.empty()) {
        int job = zeroIndegreeJobs.front();
        zeroIndegreeJobs.pop();
        sequence.push_back(job);

        // Update indegree and push dependent jobs with reduced indegree
        while (!dependents[job].empty()) {
            int dependent = dependents[job].front();
            dependents[job].pop();
            indegree[dependent]--;
            if (indegree[dependent] == 0) {
                zeroIndegreeJobs.push(dependent);
            }
        }
    }

    return sequence;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Usage: " << argv[0] << " n" << endl;
        return 1;
    }

    int n = atoi(argv[1]);
    vector<pair<int, int>> dependencies;
    cout << "Enter pairs of dependencies (i, j):" << endl;
    int i, j;
    while (cin >> i >> j) {
        dependencies.push_back({i, j});
    }

    vector<int> jobSequence = sequenceJobs(n, dependencies);

    cout << "Job sequence: ";
    for (int job : jobSequence) {
        cout << job << " ";
    }
    cout << endl;

    return 0;
}
